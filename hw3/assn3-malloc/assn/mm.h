/*- -*- mode: c; c-basic-offset: 4; -*-
 *
 * The public interface to the students' memory allocator.
 */

int mm_init(void);
void *mm_malloc(size_t size);
void mm_free(void *ptr);
void *mm_realloc(void *ptr, size_t size);

int get_free_list_index(unsigned int num_words);
int mm_check(void);
void *remove_from_free_list(void *bp);
void add_to_free_list(void *bp);
void print_free_list(int free_list_index);
/* 
 * Students work in teams of one or two.  Teams enter their team name, personal
 * names and login IDs in a struct of this type in their mm.c file.
 */
typedef struct {
    char *teamname; /* ID1+ID2 or ID1 */
    char *name1;    /* Full name of first member. */
    char *id1;      /* Login ID of first member. */
    char *name2;    /* Full name of second member (if any). */
    char *id2;      /* Login ID of second member. */
} team_t;

extern team_t team;
