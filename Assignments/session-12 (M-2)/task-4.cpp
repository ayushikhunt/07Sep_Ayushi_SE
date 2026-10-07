#include<stdio.h>
struct Bio
{
	int age;
	char desc[50];
};
struct InstaProfile
{
	int follow;
	char nm[10];
	
	struct Bio bio;
}instaprofile={10000,"Ayushi",19,"Student"};

main()
{
	printf("Username:%s",instaprofile.nm);
	printf("\nFollowers:%d",instaprofile.follow);
	printf("\nDescription:%s",instaprofile.bio.desc);
	printf("\nAge:%d",instaprofile.bio.age);
}
