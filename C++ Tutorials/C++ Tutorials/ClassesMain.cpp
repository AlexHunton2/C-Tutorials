#include <iostream>

#define LOG(x) std::cout << x << std::endl

/*
class Player {
public: // Private by default, makes it so we can access it in the main func
	int x, y;
	int speed;

	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

int main() {
	Player player;
	player.x = 0;
	player.speed = 5;
	player.Move(10, 10);
	LOG(player.x);
	std::cin.get();
}
*/