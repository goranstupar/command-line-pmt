#ifndef _PTM_TASK_H_
#define _PTM_TASK_H_

/* PTM TASK - module for handling with tasks
 *
 * Copyright (c) 2015 Goran Stupar
 *
 */
 
int add_task(struct task_descriptor *new_task);

int delete_task(long task_id);


#endif /* _PTM_TASK_H_ */