% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/quantile_normalize_bart.R
\name{preprocess_df}
\alias{preprocess_df}
\title{Preprocess a dataset for use with SoftBart}
\usage{
preprocess_df(X)
}
\arguments{
\item{X}{A data frame, possibly containing categorical variables stored as
factors.}
}
\value{
A list containing two elements.
\itemize{
  \item \code{X}: a matrix consisting of the columns of the input data frame,
  with separate columns for the different levels of categorical variables.
  \item \code{group}: a vector of group memberships of the predictors in
  \code{X}, to be passed as an argument to \code{Hypers}.
}
}
\description{
Preprocesses a data frame for use with \code{softbart}; not needed with other
model fitting functions, but may also be useful when designing custom methods
with \code{MakeForest}. Returns a data matrix X that will work with
categorical predictors, and a vector of group indicators; this is required to
get sensible variable selection for categorical variables, and should be
passed in as the group argument to \code{Hypers}.
}
\examples{
data(iris)
preprocess_df(iris)

}
