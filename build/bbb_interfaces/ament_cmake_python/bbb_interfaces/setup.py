from setuptools import find_packages
from setuptools import setup

setup(
    name='bbb_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('bbb_interfaces', 'bbb_interfaces.*')),
)
