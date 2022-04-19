

#ifndef MBBP_DEFINES_H
#define MBBP_DEFINES_H
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <queue>
#include <stack>
#include <set>
#include <map>

#define NDEBUG // must precede cassert to disable assert.
#include <cassert>

using ui = unsigned int;

#define pb push_back
#define mp make_pair

enum GraphStore { uncompressed, byte_compressed, nibble_compressed };
enum GraphOrientation { original_graph, degree_oriented };
#endif //MBBP_DEFINES_H
