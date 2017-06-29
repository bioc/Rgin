#ifndef CSCONESIO_CLASS
#define CSCONESIO_CLASS

#include "globals.h"
#include "gwas/CGWASData.h"
#include "gwas/CScones.h"

#include <fstream>
#include <string>

/*
*CSconesIO Exception Class
*/
class CSconesIOException {
	private:
		std::string __error_msg;
	public:
		CSconesIOException(std::string const& error_msg) : __error_msg(error_msg) {
			std::cout << RED << "CSconesIO Exception: " << error_msg << BLACK << "\n";
		}

		std::string what() {
			return __error_msg;
		}
};

class CSconesIO {
	public:
		static void readSparseNetworkFile(std::string const&,
						 	    GWASData*) throw (CSconesIOException);
        static void writeOutput(std::string const&, GWASData const&, VectorXd const&, float64 const&, float64 const&);
		static void writeOutput(std::string const&, GWASData const&, VectorXd const&, float64 const&, float64 const&, VectorXd const&, VectorXd const&);
        static void writeCMatrix(std::string const&, MatrixXd const&, CSconesSettings const&);
		static void writeAdjacencyMatrix(std::string const &, GWASData const &);
		static void writeAdjacencyMatrix(std::string const &, MatrixXd const&);
};

#endif //CSCONESIO_CLASS
