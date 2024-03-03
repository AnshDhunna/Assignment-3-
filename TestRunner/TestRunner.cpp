#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* Result(const char player[], const char player2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestRunner
{
	TEST_CLASS(TestRunner)
	{
	public:
		
		TEST_METHOD(WinnerPlayer1)
		{
			const char player1[] = "paper";
			const char player2[] = "rock";
			const char* expected = "Player1";
			Assert::AreEqual(expected, Result(player1, player2));
		}

		TEST_METHOD(WinnerPlayer2)
		{
			const char player1[] = "scissor";
			const char player2[] = "rock";
			const char* expected = "Player2";
			Assert::AreEqual(expected, Result(player1, player2));
		}

		TEST_METHOD(GameDraw)
		{
			const char player1[] = "rock";
			const char player2[] = "rock";
			const char* expected = "draw";
			Assert::AreEqual(expected, Result(player1, player2));
		}


		TEST_METHOD(InvalidEntery)
		{
			const char player1[] = "Ansh";
			const char player2[] = "Dhunna";
			const char* expected = "Invalid";
			Assert::AreEqual(expected, Result(player1, player2));
		}
	};
}
