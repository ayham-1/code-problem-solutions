string catAndMouse(int x, int y, int z) {
	if (abs(x-z) > abs(y-z))
		return "Cat B";
	else if (abs(x-z) < abs(y-z))
		return "Cat A";
	else return "Mouse C";
}
