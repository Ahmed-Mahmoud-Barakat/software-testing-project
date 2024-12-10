#include "Tests.h"

/* Test Code to test the Sign Up */
static struct User_Input_Type Test1_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	26,
	23,
	10,
	1998,
	Male,
	Masters_Student
	},
	{
		{
			"EdgesAcademy",
			"Edges123"
		},
	"Edges123"
	}
};

/* Test Code to test the Sign Up */
static struct User_Input_Type Test2_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Rania",
	54,
	31,
	12,
	1970,
	Female,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_$$"
	}
};

static struct User_Input_Type Test3_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ah",
	25,
	20,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test4_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ali",
	25,
	20,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test5_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"qwertyuiopasdfghjklzxcvbnmqwerta",
	25,
	20,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test6_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"qwertyuiopasdfghjklzxcvbnmqwert",
	25,
	20,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test7_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"qwertyuiopasdfghjklzxcvbnmqwer",
	25,
	20,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test8_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	-1,
	20,
	3,
	2025,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test9_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	0,
	20,
	3,
	2024,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test10_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	0,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test11_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	32,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test12_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	0,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test13_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	13,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test14_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	0
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test15_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	7
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};


static struct User_Input_Type Test16_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	2000,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test17_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"Edges Academy2024",
			"Edges_ 123_"
		},
	"Edges_ 123_"
	}
};

static struct User_Input_Type Test18_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_!123_"
		},
	"Edges_!123_"
	}
};

static struct User_Input_Type Test19_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024!",
			"Ed"
		},
	"Ed"
	}
};


static struct User_Input_Type Test20_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"01234567890123456789012345678912"
		},
	"01234567890123456789012345678912"
	}
};


static struct User_Input_Type Test21_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"Ed",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

static struct User_Input_Type Test22_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	25,
	5,
	3,
	1999,
	Male,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy20241234567891234567",
			"Edges_123_"
		},
	"Edges_123_"
	}
};

/* init function for Test Suite 1*/
static unsigned char test1_start(void)
{
	unsigned char DEL = Delete_Account(current_user_test - 1);
	unsigned char DEL1 = Delete_Account(current_user_test - 1);
	unsigned char DEL2 = Delete_Account(current_user_test - 1);

	unsigned char RET = Add_Account(&Test1_User);
	Test1_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET1 = Add_Account(&Test4_User);
	Test4_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET2 = Add_Account(&Test5_User);
	Test5_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET3 = Add_Account(&Test6_User);
	Test6_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET4 = Add_Account(&Test7_User);
	Test7_User.PersonalInfo_Form.id = current_user_test - 1;

	DBM_PrintUsers();
	return 0;
}

/* Closure Function For Test Suite 1*/
static unsigned char test1_end(void)
{
	unsigned char RET  = Delete_Account(current_user_test - 1);
	unsigned char RET1 = Delete_Account(current_user_test - 1);
	unsigned char RET2 = Delete_Account(current_user_test - 1);
	unsigned char RET3 = Delete_Account(current_user_test - 1);
	unsigned char RET4 = Delete_Account(current_user_test - 1);

	DBM_PrintUsers();
	return !RET;
}

/* init function for Test Suite 2*/
static unsigned char test2_start(void)
{
	unsigned char RET = Add_Account(&Test2_User);
	Test2_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET1= Add_Account(&Test3_User);
	Test3_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET2 = Add_Account(&Test8_User);
	Test8_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET3 = Add_Account(&Test9_User);
	Test9_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET4 = Add_Account(&Test10_User);
	Test10_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET5 = Add_Account(&Test11_User);
	Test11_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET6 = Add_Account(&Test12_User);
	Test12_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET7 = Add_Account(&Test13_User);
	Test13_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET8 = Add_Account(&Test14_User);
	Test14_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET9 = Add_Account(&Test15_User);
	Test15_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET10 = Add_Account(&Test16_User);
	Test16_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET11 = Add_Account(&Test17_User);
	Test17_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET12 = Add_Account(&Test19_User);
	Test19_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET13 = Add_Account(&Test20_User);
	Test20_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET14 = Add_Account(&Test21_User);
	Test21_User.PersonalInfo_Form.id = current_user_test - 1;
	unsigned char RET15 = Add_Account(&Test22_User);
	Test22_User.PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* Closure Function For Test Suite 1*/
static unsigned char test2_end(void)
{
	unsigned char RET = Delete_Account(current_user_test - 1);



	DBM_PrintUsers();
	return !RET;
}

/************************************************************************************
* Test ID                : TestCase 1
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ahmed
*                          Age                          -> 26
*                          DOB_day                      -> 01
*                          DOB_Month                    -> 02
*                          DOB_Year                     -> 1999
*                          Educational_Status           -> Masters_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy
*                          Password                     -> Edges123
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase1(void)
{
	unsigned int Test_id = Test1_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test1_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test1_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test1_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test1_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test1_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test1_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test1_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test1_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test1_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test1_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 2
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Rania
*                          Age                          -> 54
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 1970
*                          Educational_Status           -> PHD_Holder
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy2024
*                          Password                     -> Edges_123_$$
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB shouldn't be updated with the previous inputs
* Reason                 : Password inputs mismatch so the suite willn't initiallize 
*************************************************************************************/
static void TestCase2(void)
{
	unsigned int Test_id = Test2_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test2_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test2_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test2_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test2_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test2_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test2_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test2_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test2_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test2_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test2_User.PersonalInfo_Form.id);
}

static void TestCase3(void)
{
	unsigned int Test_id = Test3_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test3_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test3_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test3_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test3_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test3_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test3_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test3_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test3_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test3_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test3_User.PersonalInfo_Form.id);
}
//
static void TestCase4(void)
{
	unsigned int Test_id = Test4_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age,Test4_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day,Test4_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month,Test4_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year,Test4_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status,Test4_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender,Test4_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name,Test4_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name,Test4_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password,Test4_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id,Test4_User.PersonalInfo_Form.id);
}
//
static void TestCase5(void)
{
	unsigned int Test_id = Test5_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age,Test5_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day,Test5_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month,Test5_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year,Test5_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status,Test5_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender,Test5_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name,Test5_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name,Test5_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password,Test5_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id,Test5_User.PersonalInfo_Form.id);
}
//
static void TestCase6(void)
{
	unsigned int Test_id = Test6_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test6_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test6_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test6_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test6_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test6_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test6_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test6_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test6_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test6_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test6_User.PersonalInfo_Form.id);
}

static void TestCase7(void)
{
	unsigned int Test_id = Test7_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test7_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test7_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test7_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test7_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test7_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test7_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test7_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test7_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test7_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test7_User.PersonalInfo_Form.id);
}
//
static void TestCase8(void)
{
	unsigned int Test_id = Test8_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test8_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test8_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test8_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test8_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test8_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test8_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test8_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test8_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test8_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test8_User.PersonalInfo_Form.id);
}

static void TestCase9(void)
{
	unsigned int Test_id = Test9_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test9_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test9_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test9_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test9_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test9_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test9_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test9_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test9_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test9_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test9_User.PersonalInfo_Form.id);
}

static void TestCase10(void)
{
	unsigned int Test_id = Test10_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test10_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test10_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test10_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test10_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test10_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test10_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test10_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test10_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test10_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test10_User.PersonalInfo_Form.id);
}

static void TestCase11(void)
{
	unsigned int Test_id = Test11_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test11_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test11_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test11_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test11_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test11_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test11_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test11_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test11_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test11_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test11_User.PersonalInfo_Form.id);
}


static void TestCase12(void)
{
	unsigned int Test_id = Test12_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test12_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test12_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test12_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test12_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test12_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test12_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test12_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test12_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test12_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test12_User.PersonalInfo_Form.id);
}

static void TestCase13(void)
{
	unsigned int Test_id = Test13_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test13_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test13_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test13_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test13_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test13_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test13_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test13_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test13_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test13_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test13_User.PersonalInfo_Form.id);
}

static void TestCase14(void)
{
	unsigned int Test_id = Test14_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test14_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test14_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test14_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test14_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test14_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test14_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test14_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test14_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test14_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test14_User.PersonalInfo_Form.id);
}

static void TestCase15(void)
{
	unsigned int Test_id = Test15_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test15_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test15_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test15_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test15_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test15_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test15_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test15_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test15_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test15_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test15_User.PersonalInfo_Form.id);
}

static void TestCase16(void)
{
	unsigned int Test_id = Test16_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test16_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test16_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test16_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test16_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test16_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test16_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test16_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test16_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test16_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test16_User.PersonalInfo_Form.id);
}

static void TestCase17(void)
{
	unsigned int Test_id = Test17_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test17_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test17_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test17_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test17_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test17_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test17_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test17_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test17_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test17_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test17_User.PersonalInfo_Form.id);
}
//
static void TestCase18(void)
{
	unsigned int Test_id = Test18_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test18_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test18_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test18_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test18_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test18_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test18_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test18_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test18_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test18_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test18_User.PersonalInfo_Form.id);
}
//
static void TestCase19(void)
{
	unsigned int Test_id = Test19_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test19_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test19_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test19_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test19_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test19_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test19_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test19_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test19_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test19_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test19_User.PersonalInfo_Form.id);
}

static void TestCase20(void)
{
	unsigned int Test_id = Test20_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test20_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test20_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test20_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test20_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test20_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test20_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test20_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test20_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test20_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test20_User.PersonalInfo_Form.id);
}

static void TestCase21(void)
{
	unsigned int Test_id = Test21_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test21_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test21_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test21_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test21_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test21_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test21_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test21_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test21_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test21_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test21_User.PersonalInfo_Form.id);
}

static void TestCase22(void)
{
	unsigned int Test_id = Test22_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test22_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test22_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test22_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test22_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test22_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test22_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test22_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test22_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test22_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test22_User.PersonalInfo_Form.id);
}
	void Main_Test_Runner(void)
	{
		/* initialize the Registry */
		CU_initialize_registry();

		/* Adding Test Suite to the Registry */
		CU_pSuite suite_positive = CU_add_suite("Creaet Valid Account", test1_start, test1_end);
		CU_pSuite suite_negative = CU_add_suite("Creaet InValid Account", test2_start, test2_end);


		/* Adding Test Cases to the Test Suite*/
		CU_add_test(suite_positive, "Creaet Valid Account", TestCase1);
		CU_add_test(suite_positive, "Creaet Valid Account1", TestCase4);
		CU_add_test(suite_positive, "Creaet Valid Account2", TestCase5);
		CU_add_test(suite_positive, "Creaet Valid Account3", TestCase6);
		CU_add_test(suite_positive, "Creaet Valid Account4", TestCase7);

		// this suite is expected to fail and not to run due to to the invalid creation of the account 
		CU_add_test(suite_negative, "Creaet InValid Account", TestCase2);
		CU_add_test(suite_negative, "Creaet InValid Account1", TestCase3);
		CU_add_test(suite_negative, "Creaet InValid Account2", TestCase8);
		CU_add_test(suite_negative, "Creaet InValid Account3", TestCase9);
		CU_add_test(suite_negative, "Creaet InValid Account4", TestCase10);
		CU_add_test(suite_negative, "Creaet InValid Account5", TestCase11);
		CU_add_test(suite_negative, "Creaet InValid Account6", TestCase12);
		CU_add_test(suite_negative, "Creaet InValid Account7", TestCase13);
		CU_add_test(suite_negative, "Creaet InValid Account8", TestCase14);
		CU_add_test(suite_negative, "Creaet InValid Account9", TestCase15);
		CU_add_test(suite_negative, "Creaet InValid Account10", TestCase16);
		CU_add_test(suite_negative, "Creaet InValid Account11", TestCase17);
		CU_add_test(suite_negative, "Creaet InValid Account12", TestCase19);
		CU_add_test(suite_negative, "Creaet InValid Account13", TestCase20);
		CU_add_test(suite_negative, "Creaet InValid Account14", TestCase21);
		CU_add_test(suite_negative, "Creaet InValid Account15", TestCase22);


		/* Running the Test Suite through Basic Console */
		//CU_basic_set_mode(CU_BRM_VERBOSE);
		//CU_basic_run_tests();

		/* Running the Test Suite through Console interactive */
		CU_console_run_tests();

		/* Clear the registry after test finished */
		CU_cleanup_registry();
	
}
