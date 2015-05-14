#pragma once
class Game
{
public:
	Game();
	~Game();

	void Start();

	void Pause();

	void Stop();

	char* GetName();

private:

	void update();

	void draw();
};

