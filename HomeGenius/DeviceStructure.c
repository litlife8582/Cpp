/*Write a C program that defines a structure named "Device" with pointer
attributes including an ID (integer), name (string), and status (boolean).
Additionally, define a nested structure called "Light" within "Device,"
which features pointer attributes such as Watts (integer) and Light_Type 
(Modern/Classic). Implement a main() function to test the structure 
variables, utilizing dynamic memory concepts (malloc()/calloc() function) 
for the pointer attributes in both structures (Device and Light). 
Furthermore, ensure the main() function reads values for these attributes 
and prints the results accordingly.*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

struct Light{
    int *watt;
    char *light_type;
};

struct Device{
    int *id;
    char *name;
    bool *status;
    struct Light *l;    
};

void initDevice(struct Device *device,int id,char *name,bool status,int watt,char *light_type){
    device->id = (int *)malloc(sizeof(int));
    device->name = (char *)malloc(strlen(name) + 1);
    device->status = (bool *)malloc(sizeof(bool));
    device->l = (struct Light *)malloc(sizeof(struct Light));

    device->l->watt = (int *)malloc(sizeof(int));
    device->l->light_type = (char *)malloc(strlen(light_type) + 1);

    *(device->id)=id;
    strcpy(device->name,name);
    *(device->status)=status;
    *(device->l->watt)=watt;
    strcpy(device->l->light_type,light_type);
}

void displayDevice(struct Device *device){
    printf("\nDevice Details\n");
    printf("ID: %d\n",*(device->id));
    printf("Name: %d\n",device->name);
    printf("Status: %s\n",*(device->status)?"ON":"OFF");
    printf("Light Wattage: %d\n",*(device->l->watt));
    printf("Light Type: %s\n",device->l->light_type);
}

void freeDevice(struct Device *device){
    free(device->id);
    free(device->name);
    free(device->status);
    free(device->l->watt);
    free(device->l->light_type);
    free(device->l);
}

int main(){
    struct Device *d=(struct device *)malloc(sizeof(struct Device));
    d->l=(struct Light *)malloc(sizeof(struct Light));
    
    int id;
    char name[50];
    int watt;
    char light_type[20];
    int status;

    printf("Enter the device ID: ");
    scanf("%d",&id);
    getchar();
    printf("Enter the device name: ");
    fgets(name,sizeof(name),stdin);
    name[strcmp(name,"\n")]='\0';
    printf("Enter the Device Status (1 for ON, 0 for OFF): ");
    scanf("%d",&status);
    printf("Enter the Light Wattage: ");
    scanf("%d",&watt);
    printf("Enter the Light Type(Modern/Classic): ");
    scanf("%19s",light_type);

    d=(struct Device *)malloc(sizeof(struct Device)); 
    d->l=(struct Light *)malloc(sizeof(struct Light)); 

    initDevice(d,id,name,status,watt,light_type);

    displayDevice(d);
    
    freeDevice(d);

    return 0;
}

