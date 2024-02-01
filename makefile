STD=c99
CC=gcc
CCFLAGS=-Wall -Wextra -ansi -pedantic -std=$(STD)

TARGET=binarytree.exe
OBJS=tree.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# tree.o: ../src/app/BinaryTree.c
# 	$(CC) $(CCFLAGS) -c ../src/app/BinaryTree.c -o tree.o

# client.o: ../src/tests/BinaryTreeClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/BinaryTreeClient.c -o client.o


# TARGET=deque.exe
# OBJS=deque.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# deque.o: ../src/app/Deque.c
# 	$(CC) $(CCFLAGS) -c ../src/app/Deque.c -o deque.o

# client.o: ../src/tests/DequeClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/DequeClient.c -o client.o


# TARGET=linkedlist.exe
# OBJS=list.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# list.o: ../src/app/LinkedList.c
# 	$(CC) $(CCFLAGS) -c ../src/app/LinkedList.c -o list.o

# client.o: ../src/tests/LinkedListClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/LinkedListClient.c -o client.o


# TARGET=queue.exe
# OBJS=queue.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# queue.o: ../src/app/Queue.c
# 	$(CC) $(CCFLAGS) -c ../src/app/Queue.c -o queue.o

# client.o: ../src/tests/QueueClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/QueueClient.c -o client.o


# TARGET=stack.exe
# OBJS=stack.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# stack.o: ../src/app/Stack.c
# 	$(CC) $(CCFLAGS) -c ../src/app/Stack.c -o stack.o

# client.o: ../src/tests/StackClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/StackClient.c -o client.o


# TARGET=dequeexample.exe
# OBJS=example.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# example.o: ../src/app/ExemploListaDuplamenteEncadeada.c
# 	$(CC) $(CCFLAGS) -c ../src/app/ExemploListaDuplamenteEncadeada.c -o example.o

# client.o: ../src/tests/DequeExampleClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/DequeExampleClient.c -o client.o


# TARGET=treeoperations.exe
# OBJS=example.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# example.o: ../src/app/OperacoesComArvoreBinaria.c
# 	$(CC) $(CCFLAGS) -c ../src/app/OperacoesComArvoreBinaria.c -o example.o

# client.o: ../src/tests/BinaryTreeOpsClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/BinaryTreeOpsClient.c -o client.o


# TARGET=queueoperations.exe
# OBJS=example.o client.o

# all: $(OBJS)
# 	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

# example.o: ../src/app/OperacoesDeFila.c
# 	$(CC) $(CCFLAGS) -c ../src/app/OperacoesDeFila.c -o example.o

# client.o: ../src/tests/QueueOperationsClient.c
# 	$(CC) $(CCFLAGS) -c ../src/tests/QueueOperationsClient.c -o client.o


TARGET=stackoperations.exe
OBJS=example.o client.o

all: $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET)

example.o: ../src/app/OperacoesSobrePilha.c
	$(CC) $(CCFLAGS) -c ../src/app/OperacoesSobrePilha.c -o example.o

client.o: ../src/tests/StackOperationsClient.c
	$(CC) $(CCFLAGS) -c ../src/tests/StackOperationsClient.c -o client.o

clean:
	rm -rf ./bin/*.o