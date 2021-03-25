#pragma once
//_STATS_HPP_
#ifndef _STATS_HPP_
#define _STATS_HPP_

class Stats final
{
public:
    static Stats& Shared()
    {
        static Stats instance;
        return instance;
    }



private:

    

};



#endif
//_STATS_HPP