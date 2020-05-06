#include <memory.h>
#include <stdio.h>

typedef struct {
    int curpage;
    int tags[256];
} book_reader;

void print_book(book_reader);
void print_book_ptr(book_reader*);

int main(void)
{
    book_reader book1;
    book1.curpage = 64;
    book1.tags[0] = 2;
    book1.tags[1] = 8;
    book1.tags[2] = 32;

    print_book(book1);

    book_reader* book2;
    book2 = &book1;
    book2->curpage = 52;
    int arr[4] = { 1, 2, 4, 5 };
    memcpy(book2->tags, arr, sizeof(arr));

    print_book_ptr(book2);

    return 0;
}

void print_book(book_reader book)
{
    printf("curpage = %d\n", book.curpage);
    printf("tags:\n");
    for (int i = 0; book.tags[i] != 0; i++) {
        printf("  %d. %d\n", i, book.tags[i]);
    }

    return;
}

void print_book_ptr(book_reader* book)
{
    printf("curpage = %d\n", book->curpage); // book->curpage == (*book).curpage
    printf("tags:\n");
    for (int i = 0; book->tags[i] != 0; i++) { // book->tags == (*book).tags
        printf("  %d. %d\n", i, book->tags[i]);
    }
}
