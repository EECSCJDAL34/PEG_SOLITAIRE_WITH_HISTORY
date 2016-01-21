note
	description: "A board for the peg solitaire game."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	BOARD

inherit
	ANY
		redefine
			out, is_equal
		end

create
	make_default,
	make_easy,
	make_cross,
	make_plus,
	make_pyramid,
	make_arrow,
	make_diamond,
	make_skull

feature -- Constructor
	make_default
			-- Initialize a default board with all slots unavailable.
		do
			create imp.make_filled (unavailable_slot, 7, 7)
		ensure
			board_set:
				Current ~ bta.templates.default_board
		end

	make_easy
			-- Initialize an easy board.
		do
			make_default
			set_status (1, 4, unoccupied_slot)
			set_status (4, 4, unoccupied_slot)
			set_status (6, 4, unoccupied_slot)

			set_statuses (2, 3, 4, 4, occupied_slot)
			set_status (5, 4, occupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.easy_board
		end

	make_cross
			-- Initialize a Cross board.
		do
			create imp.make_filled (unoccupied_slot, 7, 7)

			set_statuses (1, 2, 1, 2, unavailable_slot)
			set_statuses (6, 7, 1, 2, unavailable_slot)
			set_statuses (1, 2, 6, 7, unavailable_slot)
			set_statuses (6, 7, 6, 7, unavailable_slot)

			set_statuses (3, 3, 3, 5, occupied_slot)
			set_statuses (2, 5, 4, 4, occupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.cross_board
		end

	make_plus
			-- Initialize a Plus board.
		do
			create imp.make_filled (unoccupied_slot, 7, 7)

			set_statuses (1, 2, 1, 2, unavailable_slot)
			set_statuses (6, 7, 1, 2, unavailable_slot)
			set_statuses (1, 2, 6, 7, unavailable_slot)
			set_statuses (6, 7, 6, 7, unavailable_slot)

			set_statuses (4, 4, 2, 6, occupied_slot)
			set_statuses (2, 6, 4, 4, occupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.plus_board
		end

	make_pyramid
			-- Initialize a Pyramid board.
		do
			create imp.make_filled (unoccupied_slot, 7, 7)

			set_statuses (1, 2, 1, 2, unavailable_slot)
			set_statuses (6, 7, 1, 2, unavailable_slot)
			set_statuses (1, 2, 6, 7, unavailable_slot)
			set_statuses (6, 7, 6, 7, unavailable_slot)

			set_statuses (2, 2, 4, 4, occupied_slot)
			set_statuses (3, 3, 3, 5, occupied_slot)
			set_statuses (4, 4, 2, 6, occupied_slot)
			set_statuses (5, 5, 1, 7, occupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.pyramid_board
		end

	make_arrow
			-- Initialize a Arrow board.
		do
			create imp.make_filled (unoccupied_slot, 7, 7)

			set_statuses (1, 2, 1, 2, unavailable_slot)
			set_statuses (6, 7, 1, 2, unavailable_slot)
			set_statuses (1, 2, 6, 7, unavailable_slot)
			set_statuses (6, 7, 6, 7, unavailable_slot)

			set_statuses (1, 1, 4, 4, occupied_slot)
			set_statuses (2, 2, 3, 5, occupied_slot)
			set_statuses (3, 3, 2, 6, occupied_slot)
			set_statuses (4, 4, 4, 4, occupied_slot)
			set_statuses (5, 5, 4, 4, occupied_slot)
			set_statuses (6, 7, 3, 5, occupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.arrow_board
		end

	make_diamond
			-- Initialize a Diamond board.
		do
			create imp.make_filled (unoccupied_slot, 7, 7)

			set_statuses (1, 2, 1, 2, unavailable_slot)
			set_statuses (6, 7, 1, 2, unavailable_slot)
			set_statuses (1, 2, 6, 7, unavailable_slot)
			set_statuses (6, 7, 6, 7, unavailable_slot)

			set_statuses (1, 1, 4, 4, occupied_slot)
			set_statuses (2, 2, 3, 5, occupied_slot)
			set_statuses (3, 3, 2, 6, occupied_slot)
			set_statuses (4, 4, 1, 7, occupied_slot)
			set_statuses (4, 4, 4, 4, unoccupied_slot)
			set_statuses (5, 5, 2, 6, occupied_slot)
			set_statuses (6, 6, 3, 5, occupied_slot)
			set_statuses (7, 7, 4, 4, occupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.diamond_board
		end

	make_skull
			-- Initialize a Skull board.
		do
			create imp.make_filled (unoccupied_slot, 7, 7)

			set_statuses (1, 2, 1, 2, unavailable_slot)
			set_statuses (6, 7, 1, 2, unavailable_slot)
			set_statuses (1, 2, 6, 7, unavailable_slot)
			set_statuses (6, 7, 6, 7, unavailable_slot)

			set_statuses (1, 7, 3, 5, occupied_slot)
			set_statuses (3, 5, 2, 6, occupied_slot)

			set_statuses (4, 4, 3, 3, unoccupied_slot)
			set_statuses (4, 4, 5, 5, unoccupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.skull_board
		end

feature -- Auxiliary Commands
	set_status (r, c: INTEGER; status: SLOT_STATUS)
			-- Set the status of slot at row 'r' and column 'c' to 'status'.
		require
			valid_row:
				is_valid_row (r)
			valid_column:
				is_valid_column (c)
		do
			imp[r, c] := status
		ensure
			slot_set:
				status_of (r, c) = status
			slots_not_in_range_unchanged:
				Current.matches_slots_except(
					old Current.deep_twin, r, r, c, c)
		end

	set_statuses (r1, r2, c1, c2: INTEGER; status: SLOT_STATUS)
			-- Set the range of slots to 'status':
			-- intersection of rows 'r1' to 'r2' and
			-- columns 'c1' to 'c2'.
		require
			valid_rows:
					is_valid_row (r1)
				and is_valid_row (r2)
			valid_columns:
					is_valid_column (c1)
				and is_valid_column (c2)
			valid_row_range:
				r1 <= r2
			valid_column_range:
				c1 <= c2
		do
			across
				r1 |..| r2 as r
			loop
				across
					c1 |..| c2 as c
				loop
					imp[r.item, c.item] := status
				end
			end
		ensure
			slots_in_range_set:
				across r1 |..| r2 as r all
					across c1 |..| c2 as c all
						status_of (r.item, c.item) = status
					end
				end
			slots_not_in_range_unchanged:
				Current.matches_slots_except(
					old Current.deep_twin, r1, r2, c1, c2)
		end

feature -- Auxiliary Queries
	matches_slots_except (
		other: BOARD; r1, r2, c1, c2: INTEGER)
	: BOOLEAN
			-- Do slots outside the intersection of
			-- rows 'r1' to 'r2' and columns 'c1' and 'c2'
			-- match in Current and 'other'.
		require
			consistent_row_numbers:
				Current.number_of_rows = other.number_of_rows
			consistent_column_numbers:
				Current.number_of_columns = other.number_of_columns
			valid_rows:
					is_valid_column (r1)
				and is_valid_column (r2)
			valid_columns:
					is_valid_column (c1)
				and is_valid_column (c2)
			valid_row_range:
				r1 <= r2
			valid_column_range:
				c1 <= c2
		do
			Result := true
			across
				1 |..| Current.number_of_rows as r
			loop
				across
					1 |..| Current.number_of_columns as c
				loop
					if	(	r.item < r1
						or 	r.item > r2
						or	c.item < c1
						or 	c.item > c2
						)
						and
						-- Here, although a singleton pattern is implemented
						-- on the SLOT_STATUS, since a deep_twin is called to the board,
						-- new references of statuses will be created.
						Current.status_of (r.item, c.item) /~
							other.status_of (r.item, c.item)
					then
						Result := false
					end
				end
			end
		ensure
			correct_result:
				Result =
					across
						1 |..| Current.number_of_rows as r
					all
						across
							1 |..| Current.number_of_columns as c
						all
							(	r.item < r1
							or 	r.item > r2
							or	c.item < c1
							or 	c.item > c2
							) implies
								Current.status_of (r.item, c.item) ~
								other.status_of (r.item, c.item)
						end
					end
		end

	unavailable_slot: UNAVAILABLE_SLOT
			-- A slot not available for movement.
		do
			Result := ssa.unavailable_slot
		ensure
			Result = ssa.unavailable_slot
		end

	occupied_slot: OCCUPIED_SLOT
			-- A slot available for moment but currently occupied.
		do
			Result := ssa.occupied_slot
		ensure
			Result = ssa.occupied_slot
		end

	unoccupied_slot: UNOCCUPIED_SLOT
			-- A slot available for moment and currently unoccupied.
		do
			Result := ssa.unoccupied_slot
		ensure
			Result = ssa.unoccupied_slot
		end

feature -- Queries
	number_of_rows: INTEGER
			-- Number of rows in the board of game.
		do
			Result := imp.height
		ensure
			correct_result:
				Result = imp.height
		end

	number_of_columns: INTEGER
			-- Number of columns in the board of game.
		do
			Result := imp.width
		ensure
			correct_result:
				Result = imp.width
		end

	is_valid_row (r: INTEGER): BOOLEAN
			-- Is 'r' a valid row number?
		do
			Result := 1 <= r and r <= number_of_rows
		ensure
			correct_result:
				Result = (1 <= r and r <= number_of_rows)
		end

	is_valid_column (c: INTEGER): BOOLEAN
			-- Is 'c' a valid column number?
		do
			Result := 1 <= c and c <= number_of_columns
		ensure
			correct_result:
				Result = (1 <= c and c <= number_of_columns)
		end

	status_of (r, c: INTEGER): SLOT_STATUS
			-- Is the slot at row 'r' and column 'c'
			-- unavailable, occupied, or unoccupied?
		require
			valid_row:
				is_valid_row (r)
			valid_column:
				is_valid_column (c)
		do
			Result := imp[r, c]
		ensure
			correct_result:
				Result = imp[r, c]
		end

	number_of_occupied_slots: INTEGER
			-- Number of slots occupied by pegs on current board.
		do
			across
				1 |..| number_of_rows as r
			loop
				across
					1 |..| number_of_columns as c
				loop
					if status_of (r.item, c.item) = occupied_slot then
						Result := Result + 1
					end
				end
			end
		end

feature -- Equality
	is_equal (other: like Current): BOOLEAN
			-- Is current board equal to 'other'?
		do
			Result := out ~ other.out
		ensure then
			correct_result:
				Result = (out ~ other.out)
		end

feature -- Output
	out: STRING
			-- String representation of current board.
		do
			create Result.make_empty
			across
				1 |..| number_of_rows as r
			loop
				across
					1 |..| number_of_columns as c
				loop
					-- Note: ARRAY2 takes row and then column
					Result.append (imp[r.item, c.item].out)
				end
				if r.item < number_of_rows then
					Result.append ("%N")
				end
			end
		end

feature {NONE} -- Implementation
	ssa:SLOT_STATUS_ACCESS
	bta: BOARD_TEMPLATES_ACCESS

	-- Note: ARRAY2 takes row (y) and then column (x)
	imp: ARRAY2[SLOT_STATUS]
end
