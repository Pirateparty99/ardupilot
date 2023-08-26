# include "GCS_Mavlink.h"
# include <Tracker.h>

MAV_TYPE GCS_Tracker::frame_type() const
{
    return MAV_TYPE_ANTENNA_TRACKER;
}
