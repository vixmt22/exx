CC = g++8

INCDIR =
LIBDIR =
BINDIR = ..
OBJDIR = .obj

SVN_VERSION = 43360

$(shell if [ ! -d $(OBJDIR) ]; then mkdir $(OBJDIR); fi)

TARGET = $(BINDIR)/db_r$(SVN_VERSION)

# Project Flags
CFLAGS = -w -m32 -g -Wall -O2 -pipe -fno-rtti -fno-exceptions -Wno-long-long -pthread -D_THREAD_SAFE

# FreeBSD stack protector +20.04.2021
CFLAGS += -fstack-protector-all

CXXFLAGS = -std=c++11 -Wl,-rpath=/usr/local/lib/gcc8

# Boost
INCDIR += -I../../../Extern/include/boost

# MySQL
INCDIR += -I/usr/local/include/mysql
LIBS += /usr/local/lib/mysql/libmysqlclient.a /usr/lib/libz.a

# Project Libraries
INCDIR += -I/usr/local/include
INCDIR += -I../../../Extern/include
LIBDIR += -I../../../Extern/lib

LIBDIR += -L../../libthecore/lib -L../../libsql -L../../libpoly -L../../libgame/lib
LIBS += -lthecore -lsql -lpoly -lgame -lm

# OpenSSL
LIBS += -lssl -lcrypto

CPPFILE = Config.cpp NetBase.cpp Peer.cpp PeerBase.cpp Main.cpp Lock.cpp DBManager.cpp \
		Cache.cpp LoginData.cpp ClientManager.cpp ClientManagerPlayer.cpp ClientManagerLogin.cpp \
		ClientManagerBoot.cpp ClientManagerParty.cpp ClientManagerGuild.cpp GuildManager.cpp HB.cpp \
		PrivManager.cpp MoneyLog.cpp ItemAwardManager.cpp ClientManagerEventFlag.cpp Marriage.cpp \
		Monarch.cpp BlockCountry.cpp ItemIDRangeManager.cpp ClientManagerHorseName.cpp version.cpp \
		AuctionManager.cpp ProtoReader.cpp CsvReader.cpp 

OBJS = $(CPPFILE:%.cpp=$(OBJDIR)/%.o)

default: $(TARGET)

$(TARGET): $(OBJS)
	@echo linking ...
	@$(CC) $(CFLAGS) $(CXXFLAGS) $(LIBDIR) $(OBJS) $(LIBS) -o $(TARGET)
	@touch version.cpp

$(OBJDIR)/%.o: %.cpp
	@echo -e "\033[0;33mDerleniyor -> \033[0m" $<
	@$(CC) $(CFLAGS) $(CXXFLAGS) $(INCDIR) -c $< -o $@

$(OBJDIR)/version.o: version.cpp
	@$(CC) $(CFLAGS) $(CXXFLAGS) -D__DB_VERSION__=\"$(SVN_VERSION)\" -c $< -o $@
	@echo compile $<

$(OBJDIR):
	@mkdir $(OBJDIR)

clean:
	@rm -f $(OBJS) $(BINDIR)/db_r*

dep:
	@touch Depend
	makedepend -fDepend $(INCDIR) -I/usr/include/c++/3.3 -I/usr/include/c++/4.2 -p$(OBJDIR)/ $(CPPFILE) 2> /dev/null

sinclude Depend
