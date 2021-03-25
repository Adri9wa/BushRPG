#pragma once
//_COMPONENT_BUILDER_HPP_
#ifndef _COMPONENT_
#define _COMPONENT_

class Component
{
public:
    Component() = default;
    virtual ~Component() = default;

    virtual void Initialize() = 0;
    virtual void Update() = 0;
    virtual void Remove() = 0;

};


#endif
