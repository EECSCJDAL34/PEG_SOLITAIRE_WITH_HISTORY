note
	description: "Abstraction of commands of a peg solitaire game."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMMAND

feature -- Constructor for descendant commands.
	make (r, c: INTEGER)
		do
			game := ga.game
			row := r
			column := c
		end

feature -- access game

	ga: GAME_ACCESS
	game : GAME

	row, column: INTEGER

feature -- execute and undo

	execute
		deferred
		end

	undo
		deferred
		end

	redo
		deferred
		end
end
