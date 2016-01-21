note
	description: "Summary description for {TEST_SOLITAIRE_UI}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_SOLITAIRE_UI
inherit
	ES_TEST
create
	make
feature
	make
		do
			add_boolean_case (agent test)
			add_boolean_case (agent test2)
			add_boolean_case (agent test3)
			add_boolean_case (agent move_left_messages)
			add_boolean_case (agent move_right_messages)
			add_boolean_case (agent t_33)
			add_boolean_case (agent t_34)
			add_boolean_case (agent t_35)
			add_boolean_case (agent t_36)
			add_boolean_case (agent t_37)
			add_boolean_case (agent t_38)
		end
feature
	test: BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1: BOARD
		do
			comment ("test_cross_game: undo")

			create ui.new_cross_game
			Result := ui.game.board ~ bta.templates.cross_board
			check Result end

			b1 := ui.game.board.deep_twin
			ui.move_left (3, 4)

			ui.undo
			Result :=
				ui.game.board ~ b1
				and
				ui.message ~ ui.success
			check Result end
		end

test2: BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1: BOARD
		do
			comment ("test_cross_game: undo and redo")

			create ui.new_cross_game
			Result := ui.game.board ~ bta.templates.cross_board
			check Result end
			ui.move_left (3, 4)
--			 Result :=
--            ui.game.board.out ~ "[
--              **...**
--				**.O.**
--				.O..O..
--				...O...
--				...O...
--				**...**
--				**...**
--               ]"
--         check Result end
		--	b1 := ui.game.board.deep_twin
			ui.move_up (5,4)
			b1 := ui.game.board.deep_twin
			ui.undo
			ui.redo
			Result :=
				ui.game.board ~ b1
				and
				ui.message ~ ui.success
			check Result end
		end


	test3: BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1, b2: BOARD
		do
			comment ("test_plus_game: undo and redo")

			create ui.new_plus_game
			Result := ui.game.board ~ bta.templates.plus_board
			check Result end
			ui.move_up (3, 4)
--			 Result :=
--            ui.game.board.out ~ "[
--             	**.O.**
--				**...**
--				.......
--				O..OOO.
--				.......
--				**...**
--				**.O.**
--               ]"
--         check Result end
		--	b1 := ui.game.board.deep_twin
			ui.move_down (5,4)
			b1 := ui.game.board.deep_twin
			ui.move_left (4,3)
			b2 := ui.game.board.deep_twin
			ui.undo
			ui.undo
			ui.redo
			Result :=
				ui.game.board ~ b1
				and
				ui.message ~ ui.success
			check Result end
			ui.redo
			Result :=
				ui.game.board ~ b2
				and
				ui.message ~ ui.success
			check Result end
		end


		move_left_messages: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
         ssa: SLOT_STATUS_ACCESS
      do
         comment("move_left_messages: possible messages for move_left")
         create ui.new_diamond_game
         Result :=
            ui.game.board.out ~ "[
               **.O.**
               **OOO**
               .OOOOO.
               OOO.OOO
               .OOOOO.
               **OOO**
               **.O.**
               ]"
         check Result end

         -- violating from_slot_valid_row
         ui.move_left (8, 9)
         Result := ui.message ~ ui.error_row_not_valid (8)
         check Result end

         -- violating from_slot_valid_column
         ui.move_left (7, 9)
         Result := ui.message ~ ui.error_column_not_valid (9)
         check Result end

         -- violating middle_slot_valid_column
         ui.move_left (7, 1)
         Result := ui.message ~ ui.error_column_not_valid (0)
         check Result end

         -- violating to_slot_valid_column
         ui.move_left (7, 2)
         Result := ui.message ~ ui.error_column_not_valid (0)
         check Result end

         -- violating from_slot_occupied
         ui.move_left (4, 4)
         Result := ui.message ~ ui.error_slot_not_of_status (4, 4, ssa.occupied_slot)
         check Result end

         -- violating middle_slot_occupied
         ui.move_left (2, 3)
         Result := ui.message ~ ui.error_slot_not_of_status (2, 2, ssa.occupied_slot)
         check Result end

         -- violating to_slot_unoccupied
         ui.move_left (3, 4)
         Result := ui.message ~ ui.error_slot_not_of_status (3, 2, ssa.unoccupied_slot)
         check Result end

         -- success
         ui.move_left (4, 6)
         Result := ui.message ~ ui.success
         check Result end

end


move_right_messages: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
         ssa: SLOT_STATUS_ACCESS
      do
         comment("move_right_messages: possible messages for move_right")
         create ui.new_diamond_game
         Result :=
            ui.game.board.out ~ "[
               **.O.**
               **OOO**
               .OOOOO.
               OOO.OOO
               .OOOOO.
               **OOO**
               **.O.**
               ]"
         check Result end

         -- violating from_slot_valid_row
         ui.move_right (8, 9)
         Result := ui.message ~ ui.error_row_not_valid (8)
         check Result end

         -- violating from_slot_valid_column
         ui.move_right (7, 9)
         Result := ui.message ~ ui.error_column_not_valid (9)
         check Result end

         -- violating middle_slot_valid_column
         ui.move_right (1, 7)
         Result := ui.message ~ ui.error_column_not_valid (8)
         check Result end

         -- violating to_slot_valid_column
         ui.move_right (1, 6)
         Result := ui.message ~ ui.error_column_not_valid (8)
         check Result end

         -- violating from_slot_occupied
         ui.move_right (4, 4)
         Result := ui.message ~ ui.error_slot_not_of_status (4, 4, ssa.occupied_slot)
         check Result end

         -- violating middle_slot_occupied
         ui.move_right (2, 5)
         Result := ui.message ~ ui.error_slot_not_of_status (2, 6, ssa.occupied_slot)
         check Result end

         -- violating to_slot_unoccupied
         ui.move_right (3, 4)
         Result := ui.message ~ ui.error_slot_not_of_status (3, 6, ssa.unoccupied_slot)
         check Result end

         -- success
         ui.move_right (4, 2)
         Result := ui.message ~ ui.success
         check Result end
      end

      feature -- Messages of undo

   t_33: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
      do
         comment ("t_33: violation msg for undo when hisory is empty")
         create ui.new_diamond_game
         ui.undo
         Result := ui.message ~ ui.error_nothing_to_undo
         check Result end
      end

   t_34: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
      do
         comment ("t_34: success msg for undo")
         create ui.new_diamond_game
         Result :=
            ui.game.board.out ~ "[
               **.O.**
               **OOO**
               .OOOOO.
               OOO.OOO
               .OOOOO.
               **OOO**
               **.O.**
               ]"
         check Result end

         ui.move_left (3, 3)

         ui.undo
         Result := ui.message ~ ui.success
      end

   t_35: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
      do
         comment ("t_35: violation msg for undo too many times")
         create ui.new_diamond_game
         Result :=
            ui.game.board.out ~ "[
               **.O.**
               **OOO**
               .OOOOO.
               OOO.OOO
               .OOOOO.
               **OOO**
               **.O.**
               ]"
         check Result end

         ui.move_left (3, 3)

         ui.undo
         ui.undo
         Result := ui.message ~ ui.error_nothing_to_undo
      end

feature -- Messages of redo

   t_36: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
      do
         comment ("t_36: violation msg for redo when hisory is empty")
         create ui.new_diamond_game
         ui.redo
         Result := ui.message ~ ui.error_nothing_to_redo
         check Result end
      end

   t_37: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
      do
         comment ("t_37: success msg for redo")
         create ui.new_diamond_game
         Result :=
            ui.game.board.out ~ "[
               **.O.**
               **OOO**
               .OOOOO.
               OOO.OOO
               .OOOOO.
               **OOO**
               **.O.**
               ]"
         check Result end

         ui.move_left (3, 3)

         ui.undo
         ui.redo
         Result := ui.message ~ ui.success
      end

   t_38: BOOLEAN
      local
         ui: SOLITAIRE_USER_INTERFACE
      do
         comment ("t_38: violation msg for redo too many times")
         create ui.new_diamond_game
         Result :=
            ui.game.board.out ~ "[
               **.O.**
               **OOO**
               .OOOOO.
               OOO.OOO
               .OOOOO.
               **OOO**
               **.O.**
               ]"
         check Result end

         ui.move_left (3, 3)

         ui.undo
         ui.redo
         ui.redo
         Result := ui.message ~ ui.error_nothing_to_redo
      end
end
