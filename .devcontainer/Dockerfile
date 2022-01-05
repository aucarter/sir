# Creates standard environment for R and C++

## Start from Python
FROM python:3.7

## Handle for maintainer
LABEL ”Austin Carter” aucarter@uw.edu

## Update and install gcc
# RUN apt-get update && apt-get install -y \
#   gcc

## R packages
# RUN install2.r --error \
#     TMB \
#     Rcpp \
#     rstan

## zsh
RUN sh -c "$(wget -O- https://github.com/deluan/zsh-in-docker/releases/download/v1.1.2/zsh-in-docker.sh)"

## Make R the default
# CMD [”R”]

## Install python and dvc
# RUN apt-get update && apt-get install -y \
#   python3.9 \
#   python3-pip
## Install miniconda
# RUN apt-get install -y curl 
# RUN curl https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh --output miniconda.sh
# RUN bash miniconda.sh -b
# RUN export PATH="/root/miniconda3/bin:$PATH"

ADD requirements.txt /
RUN pip install -r /requirements.txt