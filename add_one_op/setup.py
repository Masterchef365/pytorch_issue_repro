from setuptools import setup
from torch.utils.cpp_extension import BuildExtension, CppExtension

setup(
    name="add_one",
    ext_modules=[
        CppExtension(
            name="libadd_one",
            sources=["add_one.cpp"],
        )
    ],
    cmdclass={"build_ext": BuildExtension.with_options(no_python_abi_suffix=True)},
)
