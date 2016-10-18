#ifndef COMP_H
#define COMP_H
template <typename E>
class Comp {
public:
	static bool prior(E& left, E& right);
};

template <typename E>
bool Comp<E>::prior(E& left, E& right) {
	return left <= right;
}

template <typename E>
void swap(E* e, int a, int b) {
	E temp = e[a];
	e[a] = e[b];
	e[b] = temp;
	return;
}

#endif
