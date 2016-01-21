note
	description: "Summary description for {COMMAND_MOVE_RIGHT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_MOVE_RIGHT

inherit
	COMMAND

create
	make

feature -- operations of the command

	execute
		do
		ga.game.move_right (row, column)

		end

	undo
		do
		ga.game.board.set_status (row, column, ga.game.board.occupied_slot)
		ga.game.board.set_status (row, column + 1, ga.game.board.occupied_slot)
		ga.game.board.set_status (row, column + 2, ga.game.board.unoccupied_slot)
		end

	redo
		do
		ga.game.board.set_status (row, column, ga.game.board.unoccupied_slot)
		ga.game.board.set_status (row, column + 1, ga.game.board.unoccupied_slot)
		ga.game.board.set_status (row, column + 2, ga.game.board.occupied_slot)
		end
end

