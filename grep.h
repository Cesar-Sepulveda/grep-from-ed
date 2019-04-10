#define	BLKSIZE	4096
#define	NBLK	2047
#define	NULL	0
#define	LBSIZE	4096
#define FNSIZE 128
#define	ESIZE	256
#define	GBSIZE	256
#define	NBRA	5
#define	EOF	-1
#define	CBRA	1
#define	CCHR	2
#define	CDOT	4
#define	CCL	6
#define	NCCL	8
#define	CDOL	10
#define	CEOF	11
#define	CKET	12
#define	CBACK	14
#define	CCIRC	15
#define	STAR	01
#define	READ	0
#define	WRITE	1
#define	SIGHUP	1
#define ARGC_ERROR 0
#define BUFSIZE 100

typedef void	(*SIG_TYP)(int);

char	Q[]	= "";
char	T[]	= "TMP";
int	peekc;
int	lastc;
char	savedfile[FNSIZE];
char	file[FNSIZE];
char	linebuf[LBSIZE];
char	expbuf[ESIZE+4];
int	given;
unsigned int	*addr1, *addr2;
unsigned int	*dot, *dol, *zero;
char	genbuf[LBSIZE];
long	count;
char	*nextip;
char	*linebp;
int	ninbuf;
int	io;
int	pflag;
int	vflag	= 1;
int	oflag;
int	listf;
int	listn;
int	col;
char	*globp;
int	tfile	= -1;
int	tline;
char	*tfname;
char	*loc1;
char	*loc2;
char	ibuff[BLKSIZE];
int	iblock	= -1;
char	obuff[BLKSIZE];
int	oblock	= -1;
int	ichanged;
int	nleft;
char	WRERR[]	= "WRITE ERROR";
int	names[26];
int	anymarks;
char	*braslist[NBRA];
char	*braelist[NBRA];
int	nbra;
int	subnewa;
int	fchange;
int	wrapp;
unsigned nlall = 128;
char	line[70];
char	*linp	= line;
char	tmpXXXXX[50] = "/tmp/eXXXXX";
//SIG_TYP	oldhup;
//SIG_TYP	oldquit;
char inputbuf[GBSIZE];
char buf[BUFSIZE];
int bufp = 0;

char	*mktemp(char *);
long	lseek(int, long, int);
int	close(int);
char *getblock(unsigned int atl, int iof);
char *getline_blk(unsigned int tl);
int advance(char *lp, char *ep);
int append(int (*f)(void), unsigned int *a);
int backref(int i, char *lp);
void blkio(int b, char *buf, long (*iofcn)(int, void*, unsigned long));
int cclass(char *set, int c, int af);
void compile(int eof);
void error(char *s);
int execute(unsigned int *addr);
void exfile(void);
void filename(const char *comm);
int getchr(void);
int getfile(void);
int getnum(void);
void global(int k);
void init(void);
void onhup(int n);
void putchr_(int ac);
void putd(void);
void putfile(void);
int putline(void);
void puts_(char *sp);
void quit(int n);
void setwide(void);
void setnoaddr(void);
void squeeze(int i);
void readfile(const char *);
void print(void);
void newline(void);
unsigned int* address(void);
int getnum(void);
void search(const char* re);
void ungetch_(int c);
int getch_(void);
void drawline(void);
void search_file(const char* filename, const char* searchfor);
void process_dir(const char* dir, const char* searchfor, void (*fp)(const char*, const char*));
void printcommand(void);

