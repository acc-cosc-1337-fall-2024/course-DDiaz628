#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test BankAccount constructor w one param")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test deposit w default construct")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test BankAccount constructor")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(100);
	REQUIRE(account.get_balance() == 600);
}

TEST_CASE("Test withdraw w default constructor")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(20);
	REQUIRE(account.get_balance() == 80);
}

TEST_CASE("Test withdraw w balance 500")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);
}

TEST_CASE("Test withdraw w funds > balance")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(101);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test checking account get balance")
{
	CheckingAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test checking account get balance w param")
{
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test deposit w default construct(checking acc)")
{
	CheckingAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test savings account")
{
	SavingsAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test savings account w param")
{
	SavingsAccount account(500);
	REQUIRE(account.get_balance() == 500);
}