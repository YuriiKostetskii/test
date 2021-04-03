#include <iostream>
#include<time.h>
using namespace std;


class Human
{
private:
	int health;
	int location;
	string skin;
	int shoots;
public:
	Human()
	{
		health = 0;
		location = 0;
		skin = "";
	}
	Human(int h, int l, string s)
	{
		health = h;
		location = l;
		skin = s;
	}
	int get_health()
	{
		return health;
	}
	int get_location()
	{
		return location;
	}
	int shoot()
	{
		
		int k = rand() % 5;
		shoots += k;
		return k*5;
	}
	void take_damage(int d)
	{
		if (health - d > 0)
		{
			health -= d;
		}
		else
		{
			health = 0;
		}
	}
	friend ostream &operator<<(ostream&out, Human &a)
	{
		out << a.skin << " Human: " << " Healh: " << a.health<<" Located at "<<a.location;
		if (a.health == 0)
		{
			out << " dead " << '\n';
		}
		else
		{
			out << '\n';
		}
		return out;
	}
	void jump()
	{
		int k = rand() % 10 - 5;
		if (location + k * 10 < -100 )
		{
			location = -100 - (location + k * 10 + 100);
		}
		else if (location + k * 10 > 100)
		{
			location = 100 - (location + k * 10 - 100);
		}
		else
		{
			location += k * 10;
		}
	}
	void run()
	{
		int k = rand() % 10 - 5;
		if (location + k * 7 < -100)
		{
			location = -100 - (location + k * 7 + 100);
		}
		else if (location + k * 7 > 100)
		{
			location = 100 - (location + k * 7 - 100);
		}
		else
		{
			location += k * 7;
		}
	}
	void heal(int h)
	{
		health += h;
	}
	int Ulti()
	{
		if (shoots > 8)
		{
			shoots -= 8;
			return 40;
		}
		else 
			return 0;
	}
};

class Android
{
private:
	int health;
	int location;
	string skin;
	int shoots;
public:
	Android()
	{
		health = 0;
		location = 0;
		skin = "";
	}
	Android(int h, int l, string s)
	{
		health = h;
		location = l;
		skin = s;
	}
	int get_health()
	{
		return health;
	}
	int get_location()
	{
		return location;
	}
	int shoot()
	{

		int k = rand() % 5;
		shoots += k;
		return k * 7;
	}
	void take_damage(int d)
	{
		if (health - d > 0)
		{
			health -= d;
		}
		else
		{
			health = 0;
		}
	}
	friend ostream& operator<<(ostream& out,Android& a)
	{
		out << a.skin << " Android: " << " Healh: " << a.health << " Located at " << a.location;
		if (a.health == 0)
		{
			out << " dead " << '\n';
		}
		else
		{
			out << '\n';
		}
		return out;
	}
	void fly()
	{
		int k = rand() % 10 - 5;
		if (location + k * 12 < -100)
		{
			location = -100 - (location + k * 12 + 100);
		}
		else if (location + k * 12 > 100)
		{
			location = 100 - (location + k * 12 - 100);
		}
		else
		{
			location += k * 12;
		}
	}
	void walk()
	{
		int k = rand() % 10 - 5;
		if (location + k * 4 < -100)
		{
			location = -100 - (location + k * 4 + 100);
		}
		else if (location + k *4 > 100)
		{
			location = 100 - (location + k * 4 - 100);
		}
		else
		{
			location += k * 4;
		}
	}
	void heal(int h)
	{
		health +=h;
	}
	void Ulti()
	{
		if (shoots > 5)
		{
			int* x = new int [2];
			x[0] = -1;
			x[1] = 1;
			shoots -= 5;
			int i = rand() % 2;
			int k =  50*x[i];
			if (location + k  < -100)
			{
				location = -100;
			}
			if (location + k > 100)
			{
				location = 100 ;
			}
		}

	}
};

class Beast
{
private:
	int health;
	int location;
	string skin;
	int shoots;
public:
	Beast()
	{
		health = 0;
		location = 0;
		skin = "";
	}
	Beast(int h, int l, string s)
	{
		health = h;
		location = l;
		skin = s;
	}
	int get_health()
	{
		return health;
	}
	int get_location()
	{
		return location;
	}
	int bit()
	{

		int k = rand() % 5;
		shoots += k;
		return k * 6;
	}
	void take_damage(int d)
	{
		if (health - d > 0)
		{
			health -= d;
		}
		else
		{
			health = 0;
		}
	}
	friend ostream& operator<<(ostream& out, Beast& a)
	{
		out << a.skin << " Beast: " << " Healh: " << a.health << " Located at " << a.location;
		if (a.health == 0)
		{
			out << " dead " << '\n';
		}
		else
		{
			out << '\n';
		}
		return out;
	}
	void fly()
	{
		int k = rand() % 10 - 5;
		if (location + k * 14 < -100)
		{
			location = -100 - (location + k * 14 + 100);
		}
		else if (location + k * 14 > 100)
		{
			location = 100 - (location + k * 14 - 100);
		}
		else
		{
			location += k * 14;
		}
	}
	void run()
	{
		int k = rand() % 10 - 5;
		if (location + k * 9 < -100)
		{
			location = -100 - (location + k * 9 + 100);
		}
		else if (location + k * 9 > 100)
		{
			location = 100 - (location + k * 9 - 100);
		}
		else
		{
			location += k * 9;
		}
	}
	void heal(int h)
	{
		health += h;
	}
	int Ulti()
	{
		if (shoots > 6)
		{
			shoots -= 5;
			int i = rand() % 10;
			return i * 6;
		}
		else
			return 0;

	}
};

class Team
{
private:
	Human h;
	Android d;
	Beast s;
public:
	Team()
	{
		h = Human();
		d = Android();
		s = Beast();
	}
	Team(Human h1, Android a1, Beast b1)
	{
		h = h1;
		d = a1;
		s = b1;
	}
	Human get_Human()
	{
		return h;
	}
	Android get_Android()
	{
		return d;
	}
	Beast get_Beast()
	{
		return s;
	}
	void fight(Team b)
	{
			Human h1 = b.get_Human();
			Android d1=b.get_Android();
			Beast s1 = b.get_Beast();
		while ((h.get_health() + d.get_health() + s.get_health() )!= 0 &&( h1.get_health() + d1.get_health() + s1.get_health()) != 0)
		{
			int* x = new int[6];
			for (int i = 0;i < 6;i++)
			{
				x[i] = 0;
			}
			int n = 0;
			while (n != 6)
			{
				int k = rand() % 6+1;
				while (x[0] == k || x[1] == k || x[2] == k || x[3] == k || x[4] == k || x[5] == 7)
				{
					k = rand() % 6+1;
				}
				x[n] = k;
				n++;
				if (k == 1&&h.get_health()!=0)
				{
					if (h.Ulti() != 0)
					{
						d.heal(h.Ulti());
						s.heal(h.Ulti());
					}
					if (abs(h.get_location() - h1.get_location()) < 10)
					{
						h1.take_damage(h.shoot());
					}
					if (abs(h.get_location() - d1.get_location()) < 10)
					{
						d1.take_damage(h.shoot());
					}
					if (abs(h.get_location() - s1.get_location()) < 10)
					{
						s1.take_damage(h.shoot());
					}
				}
				if (k == 2&&d.get_health()!=0)
				{
					d.Ulti();
					if (abs(d.get_location() - h1.get_location()) < 10)
					{
						h1.take_damage(d.shoot());
					}
					if (abs(d.get_location() - d1.get_location()) < 10)
					{
						d1.take_damage(d.shoot());
					}
					if (abs(d.get_location() - s1.get_location()) < 10)
					{
						s1.take_damage(d.shoot());
					}
				}
				if (k == 3&&s.get_health()!=0)
				{
					if (s.Ulti() != 0)
					{
						h1.take_damage(s.Ulti());
						s1.take_damage(s.Ulti());
						d1.take_damage(s.Ulti());
					}
					if (abs(s.get_location() - h1.get_location()) < 10)
					{
						h1.take_damage(s.bit());
					}
					if (abs(s.get_location() - d1.get_location()) < 10)
					{
						d1.take_damage(s.bit());
					}
					if (abs(s.get_location() - s1.get_location()) < 10)
					{
						s1.take_damage(s.bit());
					}
				}
				if (k == 4 && s1.get_health() != 0)
				{
					if (s1.Ulti() != 0)
					{
						s1.heal(h1.Ulti());
						d1.heal(h1.Ulti());
					}
					if (abs(h.get_location() - h1.get_location()) < 10)
					{
						h.take_damage(h1.shoot());
					}
					if (abs(d.get_location() - h1.get_location()) < 10)
					{
						d.take_damage(h1.shoot());
					}
					if (abs(s.get_location() - h1.get_location()) < 10)
					{
						s.take_damage(h1.shoot());
					}
				}
				if (k == 5 && d1.get_health() != 0)
				{
					d1.Ulti();
					if (abs(h.get_location() - d1.get_location()) < 10)
					{
						h.take_damage(d1.shoot());
					}
					if (abs(d.get_location() -d1.get_location()) < 10)
					{
						d.take_damage(d1.shoot());
					}
					if (abs(s.get_location() - d1.get_location()) < 10)
					{
						s.take_damage(d1.shoot());
					}
				}
				if (k == 6 && s1.get_health() != 0)
				{
					if (s1.Ulti() != 0)
					{
						h.take_damage(s1.Ulti());
						d.take_damage(s1.Ulti());
						s.take_damage(s1.Ulti());
					}
					if (abs(h.get_location() - s1.get_location()) < 10)
					{
						h.take_damage(s1.bit());
					}
					if (abs(d.get_location() - s1.get_location()) < 10)
					{
						d.take_damage(s1.bit());
					}
					if (abs(s.get_location() - s1.get_location()) < 10)
					{
						s.take_damage(s1.bit());
					}
				}

			}
			h.run();
			d.fly();
			s.fly();
			d1.fly();
			h1.run();
			s1.fly();
			cout << "Team a\n";
			cout << h << d << s;
			cout << "Team b\n";

			cout << h1 << d1 << s1;
		}
		int v = h1.get_health() + d1.get_health() + s1.get_health();
		int z = h.get_health() + d.get_health() + s.get_health();
		if (z > v)
		{
			cout << "Team a win\n";
		}
		else if (z < v)
		{
			cout << "Team b win\n";
		}
		else
		{
			cout << "draw";
		}
	}
};

int main()
{
   srand(time(NULL));
   Human g = Human(150, -50, "paladin");
   Android h = Android(100, -50, "red metal");
   Beast c = Beast(120, -50, "fox");
   Human d = Human(150, 50, "ork");
   Android e =Android(100, 50, "8-bit");
   Beast f = Beast(120, 50, "wolf");
   Team a = Team(g, h, c);
   Team b = Team(d, e, f);
   a.fight(b);
}