#include <iostream>

template <typename T>
void bubble_sort(T A[], T n) { ///функция для выполнения сортировки
    for (T i = 0; i < n; i++) { ///Цикл для считывания всех элементов массива
        for (T j = 0; j < n-i-1; j++) { ////Цикл для сравнения элементов
            if (A[j] > A[j+1]) ///Сравнение двух соседних элементов
            {
                std::swap(A[j], A[j+1]); ////Если какой-то элемент больше последующего, то элементы меняются местами
            }
        }
    }
}
template <typename T> ///функция для вывода сортировки
void print_bubble(T A[], T size){
    for (T i = 0; i < size; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;
}


template <typename T>
void insertion_sort(T B[], T k){
    for (T i = 1; i < k; i++){
        for (int j = i; j > 0; j--){ ///Цикл, сравнивающий j-ый элемент с предыдущим, пока не будет найден элемент меньший чем j-ый
            if (B[j] <= B[j - 1]){
                std::swap(B[j], B[j-1]);///Если такой элемент найдет, то они меняются местами
            }
            else{
                break;
            }
        }
    }
}

template <typename T>
void print_insertion(T B[], T size){
    for (T i = 0; i < size; i++)
        std::cout << B[i] << " ";
    std::cout << std::endl;
}



template <typename T>
void selection_sort(T C[], T m){
    for (T i = 0; i < m -1; i++){ ///Цикл выбирает наименьший элемент массива
        T min_i = i;
        for (T j = i+1; j < m; j++){ ///Цикл сравнивает наименьший элемет с другими в массиве, если найден элемент меньший,
            if (C[min_i] > C[j]){ /// то этот элемент становится наименьшим
                min_i = j;
            }
        }
        std::swap(C[i], C[min_i]); ///здесь минимальный элемент встает на нужную позицию
    }
}

template <typename T>
void print_selection(T C[], T size){
    for (T i = 0; i < size; i++)
        std::cout << C[i] << " ";
    std::cout << std::endl;
}




int main() {
    int A[] = { 7, 3, 6, 1, 9, 5, 4, 2, 8};
    int size_arr_A = sizeof(A) / sizeof(A[0]);

    bubble_sort(A, size_arr_A);
    std::cout << "Bubble sort: "<< std::endl;
    print_bubble(A, size_arr_A);

    int B[] = {2, 6, 1, 5, 3};
    int size_arr_B = sizeof(B) / sizeof(B[0]);

    insertion_sort(B, size_arr_B);
    std::cout << "Insertion sort: "<< std::endl;
    print_insertion(B, size_arr_B);

    int C[] = {5, 8, -3, 9, 0};
    int size_arr_C = sizeof(C) / sizeof(C[0]);

    selection_sort(C, size_arr_C);
    std::cout << "Selection sort: " << std::endl;
    print_selection(C, size_arr_C);

    return 0;
}
