

#ifndef __RHPMAN_ROUTE_H__
#define __RHPMAN_ROUTE_H__

class Route
{
private:
    /* data */

    uint64_t nodeID;
    uint64_t nextHop;
    uint64_t nodeAddress;
    uint32_t distance;
public:
    Route(/* args */);
    ~Route();
};

Route::Route(/* args */)
{
}

Route::~Route()
{
}

#endif
