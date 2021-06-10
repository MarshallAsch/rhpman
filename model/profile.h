

#ifndef __RHPMAN_PROFILE_H__
#define __RHPMAN_PROFILE_H__

namespace rhpman
{
    class Profile
    {
    private:
        /* data */
        uint64_t nodeID;

        // note that although this is mentioned in the paper, energy level is not actually going
        // to be implemented for this study.
        uint8_t batteryPercent;     // to be used as part of the residual energy calculation
        uint64_t batterySecondsLeft;

        uint32_t changeDegree; // the number of connections / disconnections in the last T seconds
                            // This value represents Ucdc, instead of using


        uint32_t colocationCount;   // number of times that the node sent back a 'pong'
                                    //    in the past colocation period
        uint16_t freeBufferSpace;

    public:
        Profile(/* args */);
        ~Profile();
    };

    Profile::Profile(/* args */)
    {
    }

    Profile::~Profile()
    {
    }


}; // namespace rhpman

#endif
