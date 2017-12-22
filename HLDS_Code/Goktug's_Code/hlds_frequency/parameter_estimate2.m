function [F,P]=parameter_estimate2(F,X,Y,r,P)
%[F,H]=parameter_estimate(F,H,X,Y,R);
%F is the matrix
%X is the state vector at current time/previous time for state transition
%estimation
%Y is the observation vector/current state for state transition estimation
%r is a scalar to define the covariance matrices of the parameter
%estimation equations in the form rI.
%P is the cell structure that holds the error covariance matrices for
%parallelized parameter estimation systems.

M=length(Y);

for i=1:M
    [para,P{i}] = state_estimate_parameter(X',P{i},r,F(i,:)',Y(i));
    F(i,:) = para';
end


F=F./repmat(sqrt(sum(F.^2,1)),M,1);
% F=15.*F./repmat(sum(abs(F),1),M,1);

end