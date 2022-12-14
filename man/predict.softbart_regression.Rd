% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/predict.R
\name{predict.softbart_regression}
\alias{predict.softbart_regression}
\title{Predict for SoftBart Regression}
\usage{
\method{predict}{softbart_regression}(object, newdata, iterations = NULL, ...)
}
\arguments{
\item{object}{A \code{softbart_regression} object obtained as output of the \code{softbart_regression()} function.}

\item{newdata}{A dataset to construct predictions on.}

\item{iterations}{The iterations to get predictions on; includes all of iterations including burn-in and thinning iterations. Defaults to the saved iterations, running from \code{(num_burn + num_thin):(num_burn + num_thin * num_save)}.}

\item{...}{Other arguments passed to predict.}
}
\value{
A list containing 
\itemize{
  \item \code{mu}: samples of the predicted value for each observation and iteration.
  \item \code{mu_mean}: posterior predicted values for each observation.
}
}
\description{
Computes predictions from a \code{softbart_regression} object on new data.
}
