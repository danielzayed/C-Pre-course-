#define BookmaxNumber 50
#define Five 5
#define Six_Bits 6
enum zone {KIDS,HIGHSCHOOL,ADULT,DOCUMENTARY,COMICS};
enum genere{DRAMA,THRILLER,COMEDY,NON_FICTION};
typedef union Genre {
enum genre ;
unsigned int quailty;
unsigned int plot_quailty;
float thrilling_factor;
char humor_type;
char field[four];
}GENRE;
typedef struct Book {
 long int int_Book_Number;
 char name [BookmaxNumber];
 int promotion ;
 enum zone The_zone;
 GENRE Book_Genre;
}Book;
typedef struct BookCopy {
 Book Copy;
 long int int_Book_Number;
 long int serial_number;
 int is_borrowed;
 int borrowing_times;
 unsigned int cond_of_att :Six_Bits;
 /* Cover ,Indexing ,Bar Code , Missing pages , Stained pages ,Spine*/

}BookCopy;
static char* zones[Five];
void print_book(Book * book);
char* get_zone_name(enum zone The_Book_Zone) ;
int borrow_copy(BookCopy* book, int is_borrowing);
void print_copy(BookCopy * the_book);
void init_copy(BookCopy* copy_book,long int internal_Book_Number);
unsigned int is_librarian_required(BookCopy* bookcopy);
unsigned int is_bookbinder_required(BookCopy* bookcopy);
unsigned int is_repairable(BookCopy* bookcopy);
unsigned int is_ok(BookCopy* bookcopy);
unsigned int is_useless(BookCopy* bookcopy);
unsigned int are_in_same_condition(BookCopy* bookcopy ,BookCopy* bookcopy2);
BookCopy* create_copy( Book copy,long int internalBookNumber,unsigned int condoition_of_att);
