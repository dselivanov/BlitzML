#pragma once

#include <blitzml/sparse_linear/sparse_linear_solver.h>

namespace BlitzML {

class SparseLogRegSolver : public SparseLinearSolver {
  public:
    virtual ~SparseLogRegSolver() { }

  protected: 
    void initialize_blitz_variables(value_t* initial_conditions);
    void initialize_x_variables();
    void update_bias(int max_newton_itr=8);
    void perform_backtracking();
    value_t compute_dual_obj() const;
    void update_subproblem_obj_vals();
    void update_newton_2nd_derivatives(value_t epsilon_to_add=0.);

  private:
    bool problem_is_degenerate;
    std::vector<value_t> exp_bAomega;
    std::vector<bool> is_positive_label;
};

}
