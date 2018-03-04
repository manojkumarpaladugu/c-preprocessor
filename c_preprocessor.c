void rem_cmnts(char*);
void header_incl(char*);
int main(int argc,char **argv)
{
	header_incl(argv[1]);
	rem_cmnts("temp.c");
return 0;}
