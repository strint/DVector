#ifndef DVECTOR_H_
#define DVECTOR_H_

class dvector {
public:
    // init
    // allocate memeory and read data into dvec_data based on tota_data, dvec_rank, dvec_len
    // free this dvector

private:
    size_t proc_num; // total number of process to distribute
    size_t proc_rank; // rank of this process in mpi comm world
    vector<size_t> proc_list; // proc rank list

    size_t tota_len; // total length of vector;
    size_t mean_len; // mean length of each dvecotr on each process
    double * tota_data; // source of the total data

    size_t dvec_rank; // rank of this dvector in the full vector
    size_t dvec_len; // length of dvecotr on this process
    double * dvec_data; // data of this dvector

}

double dvec_dot_product(const dvector& a, const dvector& b) {
    double dp = 0.0;
    return dp;
}

#endif // DVECTOR_H_

