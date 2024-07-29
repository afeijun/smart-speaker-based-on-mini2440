#ifndef NODE_H
#define NODE_H

#include <event.h>
#include <time.h>
#include <list>

struct Node 
{
	struct bufferevent *app_bev;
	struct bufferevent *device_bev;
	char app_id[8];
	char device_id[8];
	int online_flag;                     //表示设备是否在线  0 表示不在线
	int app_online_flag;                 //表示app 是否在线
	time_t time;
	struct event timeout;                //定时器事件
};
typedef struct Node Node;

struct timeout_node
{
	std::list<Node> *l;
	char id[8];
};
typedef struct timeout_node tNode;

#endif
