#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box *ptrBox, float *volume, float *surfaceArea) {
    *volume = ptrBox->length * ptrBox->width * ptrBox->height;
    *surfaceArea = 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height);
}

int main() {
    struct Box myBox;
    struct Box *ptrBox = &myBox;

    printf("Enter the length of the box: ");
    scanf("%f", &(ptrBox->length));
    printf("Enter the width of the box: ");
    scanf("%f", &(ptrBox->width));
    printf("Enter the height of the box: ");
    scanf("%f", &(ptrBox->height));

    float volume, surfaceArea;
    calculateVolumeAndSurfaceArea(ptrBox, &volume, &surfaceArea);

    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);

    return 0;
}