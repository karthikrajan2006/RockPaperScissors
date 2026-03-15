#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* rpsResult(char* player1, char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTests
{
    TEST_CLASS(RPSTests)
    {
    public:
        TEST_METHOD(Player1WinsWithRockVsScissors)
        {
            // Arrange
            char p1[] = "Rock";
            char p2[] = "Scissors";

            // Act
            char* result = rpsResult(p1, p2);

            // Assert
            Assert::AreEqual("Player1", result);
        }
    };
}