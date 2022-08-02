#include <iostream>
#include <vector>
using namespace std;
struct coord {
    int x, y;
    coord(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
};
struct rect {
    coord upLeft, downRight;
    rect(coord upLeft, coord downRight) {
        this->upLeft = upLeft;
        this->downRight = downRight;
    }
};
int w, h;
string page[w];
vector <rect> images;
void discoverImage(coord crd) {
    images.push_back(rect(crd));
    while (crd.x < w && page[crd.x][crd.y] == '+') {
        crd.x++;
    }
    while (crd.y < h && page[crd.x][crd.y] == '+') {
        crd.y++;
    }
    images.back().downRight = crd;
}
vector <int> subImages(rect bounds) {
    vector <int> ret;
    for (int i = 0; i < images.size(); i++) {
        if (images[i].upLeft.x < bounds.upLeft.x
         && images[i].upLeft.y < bounds.upLeft.y
         && images[i].downRight.x > bounds.downRight.x
         && images[i].downRight.y > bounds.downRight.y) {
            ret.push_back(i);
        }
    }
    return ret;
}
bool isAd(rect image) {
    for (coord i = image.upLeft; i.x < image.downRight.x; i++) {
        for (i.y = image.upLeft.y; i.y < image.downRight.y; i++) {
            if (isdigit(page[i.x][i.y])
             || isupper(page[i.x][i.y])
             || islower(page[i.x][i.y])
             || page[i.x][i.y] == '?'
             || page[i.x][i.y] == '!'
             || page[i.x][i.y] == ','
             || page[i.x][i.y] == '.'
             || page[i.x][i.y] == ' '
             || page[i.x][i.y] == '+'
            ) {
                continue;
            }
            return true;
        }
    }
    return false;
}
void removeImage(int image) {
    for (coord i = images[image].upLeft; i.x < images[image].downRight.x; i++) {
        for (i.y = images[image].upLeft.y; i.y < images[image].downRight.y; i++) {
            page[i.x][i.y] = ' ';
        }
    }
    images.erase(images.begin() + image);
}
int main() {
    cin >> w >> h;
    for (int i = 0; i < w; i++) {
        getline(cin, page[i]);
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            if (page[i][j] == '+') {
                if (i > 0 && page[i - 1][j] != '+'
                 || j > 0 && page[i][j - 1] != '+') {
                    continue;
                }
                discoverImage({i, j});
            }
        }
    }
    vector <int> imageStack;
    while (!images.empty()) {
        // PLEASE FINISH MEEEEEEEeeeee!!!
    }
}