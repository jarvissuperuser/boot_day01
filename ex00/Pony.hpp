#ifndef PONY_HPP
#define PONY_HPP

class Pony {
public:
	Pony();
	Pony Pony(const Pony& orig);
	~Pony();
	Pony ponyOnTheHeap();
	Pony ponyOnTheStack();
private:

};

#endif /* PONY_HPP */

