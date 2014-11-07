#pragma once
#include "Common.h"
#include "LogicComponent.h"

namespace Urho3D
{
	class Node;
	class Scene;
	class Plane;
	class RigidBody;
	class LogicComponent;
	class Drawable;
};

using namespace Urho3D;

class BotLogic : public LogicComponent 
{
	OBJECT(BotLogic);
public:
	/// Construct.
	BotLogic(Context* context);

	/// Register object factory and attributes.
	static void RegisterObject(Context* context);

	/// Handle startup. Called by LogicComponent base class.
	virtual void Start();

	// ���������� ������ ���� ?
	void Update(float timeStep);

	/// Handle physics world update. Called by LogicComponent base class.
	virtual void FixedUpdate(float timeStep);

private:
	void HandleNodeCollision(StringHash eventType, VariantMap& eventData);

	SharedPtr<RigidBody> rigidbody_;



};