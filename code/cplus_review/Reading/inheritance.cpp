#include <doctest/doctest.h>

#include <iostream>
#include <string>

namespace
{


} // namespace

/**
 * 상속은 OOP 언어에 공통된 요소로 IsA 관계를 표현한다.
 * 상속된 클래스는 부모 클래스가 쓰인 곳에 쓰일 수 있다.  
 */
TEST_CASE("inheritance")
{
	/**
	 * 무엇인가? 부모처럼 동작하면서 세부 사항이 추가된 클래스
	 * 왜 필요한가? 인터페이스를 제공하기위해. 구현을 재사용하기위해.
	 * 어떻게 사용하는가? 
	 */
	SUBCASE("intro")
	{
	}

	SUBCASE("usage")
	{
		SUBCASE("basic")
		{
			class Parent
			{
			public:
				Parent()
				{
				}

				void Shout()
				{
					std::cout << "Parent" << std::endl;
				}
			};

			class Child : public Parent
			{
			public:
				Child() : Parent()
				{}

				void Shout()
				{
					std::cout << "Child" << std::endl;
				}
			};

			Parent p;
			p.Shout();

			Child c;
			c.Shout();
		}
	}

	SUBCASE("use case")
	{

	}

}
