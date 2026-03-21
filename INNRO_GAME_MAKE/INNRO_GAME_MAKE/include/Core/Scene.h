#pragma once

class Scene {
public:
    virtual void Update(float dt) {}
    virtual void Render() {}
    virtual ~Scene() {}
};