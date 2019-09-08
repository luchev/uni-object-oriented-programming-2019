#ifndef PAIR_H
#define PAIR_H
#include <iostream>

template <class KEY, class VALUE>
class Pair {
private:
	KEY key;
	VALUE val;
public:
	KEY getKey() const;
	VALUE getVal() const;
	void setKey(const KEY & key);
	void setValue(const VALUE & value);
	
	template <class KEY, class VALUE>
	friend std::ostream & operator<<(std::ostream & stream, const Pair<KEY, VALUE> & pair);
};

template<class KEY, class VALUE>
inline KEY Pair<KEY, VALUE>::getKey() const
{
	return key;
}

template<class KEY, class VALUE>
inline VALUE Pair<KEY, VALUE>::getVal() const
{
	return val;
}

template<class KEY, class VALUE>
inline void Pair<KEY, VALUE>::setKey(const KEY & key)
{
	this->key = key;
}

template<class KEY, class VALUE>
inline void Pair<KEY, VALUE>::setValue(const VALUE & value)
{
	this->val = value;
}

template<class KEY, class VALUE>
inline std::ostream & operator<<(std::ostream & stream, const Pair<KEY, VALUE>& pair)
{
	stream << pair.key << " : ";
	stream << pair.val;
	return stream;
}

#endif // PAIR_H