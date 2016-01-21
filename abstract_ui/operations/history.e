note
	description: "A history of executed commands."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	HISTORY

create
	make

feature{COMMAND}
	make
		do
			-- Hint. Consider instantiating the history
			-- using an ARRAYED_LIST. (MODIFIED)

			create {ARRAYED_LIST[COMMAND]} history.make (20)
		end

feature -- history
	history: LIST[COMMAND]

	extend_history(new_cmd: COMMAND)
			-- Remove all operations to the right of the current
			-- cursor to history, then extend with the new command. (MODIFIED)
		do

			remove_right
			history.extend (new_cmd)
			--new_cmd.execute

		end


	remove_right
			--Remove all elements to the right of the current cursor in history. (MODIFIED)

	require
			valid_position : on_item = true

	local
		start_index : INTEGER
	do
		start_index := history.index
			from
				history.start
			until
				history.after
			loop
				if history.index > start_index   then
					history.remove
				end
				history.forth

			end

ensure
	proper_deletion: history.count = old history.index
			end

	item: COMMAND
			-- Item at the current cursor position. (MODIFIED)

		do
		Result:= history.item

		ensure
			Result = history.item
		end

	on_item: BOOLEAN
			-- Is currsor at a valid position? (MODIFIED)
		do
	Result := history.valid_cursor_index (history.index)

	ensure
		Result = history.valid_cursor_index (history.index)
		end

	forth
			-- Move the cursor forward. (MODIFIED)
		do

			history.forth

		end

	back
			-- Move the cursor backward. (MODIFIED)
		do
			history.back
		end

	is_empty: BOOLEAN
			-- Is there at least one command in the history? (MODIFIED)
		do

			Result := history.is_empty

			ensure
				Result = history.is_empty
		end

	is_last: BOOLEAN
			-- Is cursor at the last position? (MODIFIED)
 		do

			Result := history.islast

			ensure
				Result = history.islast
		end

end
