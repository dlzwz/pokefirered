gText_FollowerDefault::
	.string "{STR_VAR_1} is following closely.$"

EventScript_Follower::
	lock
	bufferlivemonnickname 0
	playfirstmoncry
	msgbox gText_FollowerDefault, MSGBOX_DEFAULT
	release
	end
