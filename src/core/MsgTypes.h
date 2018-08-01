#ifndef MSG_TYPES_H
#define MSG_TYPES_H

enum class MsgTypes
{
	/*
	1k messages reserved for Message Director.
	*/

	MESSAGE_DIRECTOR_SUBSCRIBE_PID = 1001,
	MESSAGE_DIRECTOR_GENERATE_PID = 1002,
	MESSAGE_DIRECTOR_GENERATE_PID_RESP = 1003,
};

#endif // MSG_TYPES_H