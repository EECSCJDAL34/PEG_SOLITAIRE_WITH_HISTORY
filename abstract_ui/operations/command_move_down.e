note
	description: "Summary description for {COMMAND_MOVE_DOWN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_MOVE_DOWN

inherit
	COMMAND

create
	make

feature -- operations of the command

	execute
		do
		ga.game.move_down (row, column)

		end

	undo
		do
		ga.game.board.set_status (row, column, ga.game.board.occupied_slot)
		ga.game.board.set_status (row + 1, column, ga.game.board.occupied_slot)
		ga.game.board.set_status (row + 2, column, ga.game.board.unoccupied_slot)
		end

	redo
		do
		ga.game.board.set_status (row, column, ga.game.board.unoccupied_slot)
		ga.game.board.set_status (row + 1, column, ga.game.board.unoccupied_slot)
		ga.game.board.set_status (row + 2, column, ga.game.board.occupied_slot)
		end
end

