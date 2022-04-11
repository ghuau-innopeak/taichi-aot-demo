constexpr float kBoxVertices[][3] = {
    {-1.0, -1.0, -1.0},  // 0
    {1.0, -1.0, -1.0},   // 1
    {1.0, 1.0, -1.0},    // 2
    {-1.0, 1.0, -1.0},   // 3
    {-1.0, -1.0, 1.0},   // 4
    {1.0, -1.0, 1.0},    // 5
    {1.0, 1.0, 1.0},     // 6
    {-1.0, 1.0, 1.0},    // 7
};

constexpr int kBoxIndices[][2] = {
    {0, 1}, {1, 2}, {2, 3}, {0, 3},

    {1, 5}, {5, 6}, {6, 2}, {1, 2},

    {4, 5}, {5, 6}, {6, 7}, {4, 7},

    {0, 4}, {4, 7}, {7, 3}, {0, 3},

    {4, 5}, {5, 1}, {1, 0}, {4, 0},

    {7, 6}, {6, 2}, {2, 3}, {7, 3},
};