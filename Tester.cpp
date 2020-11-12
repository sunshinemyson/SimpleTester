#include <iostream>
#include <functional>
#include <thread>
#include <cassert>

typedef struct {} NoneType_Tag;
typedef struct {
    using tag = NoneType_Tag;
} NoneType;
template<typename R, typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
struct function_obj {
    using type = R(*)(P0, P1, P2, P3, P4, P5, P6, P7);
    using return_type = R;
    using param_type_0 = P0;
    using param_type_1 = P1;
    using param_type_2 = P2;
    using param_type_3 = P3;
    using param_type_4 = P4;
    using param_type_5 = P5;
    using param_type_6 = P6;
    using param_type_7 = P7;

    explicit function_obj(type fp) : func_ptr_(fp) {}

    R operator()(P0 p0, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) {
        return func_ptr_(p0, p1, p2, p3, p4, p5, p6, p7);
    }
    
    type func_ptr_;
};

template <typename R>
struct function_obj <R, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>{
    /* data */
    using type = R(*)();

    using return_type = R;
    using param_type_0 = NoneType;
    using param_type_1 = NoneType;
    using param_type_2 = NoneType;
    using param_type_3 = NoneType;
    using param_type_4 = NoneType;
    using param_type_5 = NoneType;
    using param_type_6 = NoneType;
    using param_type_7 = NoneType;
    
    explicit function_obj(type fp) : func_ptr_(fp) {}

    R operator()() {
        return func_ptr_();
    }
    type func_ptr_;
};

template <typename R, typename P0>
struct function_obj <R, P0, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>
{
    /* data */
    using type = R(*)(P0);

    using return_type = R;
    using param_type_0 = P0;
    using param_type_1 = NoneType;
    using param_type_2 = NoneType;
    using param_type_3 = NoneType;
    using param_type_4 = NoneType;
    using param_type_5 = NoneType;
    using param_type_6 = NoneType;
    using param_type_7 = NoneType;
    
    explicit function_obj(type fp) : func_ptr_(fp) {}

    R operator()(P0 p) {
        return func_ptr_(p);
    }
    type func_ptr_;
};

template <typename R, typename P0, typename P1>
struct function_obj <R, P0, P1, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>
{   
    /* data */
    using type = R(*)(P0);

    using return_type = R;
    using param_type_0 = P0;
    using param_type_1 = P1;
    using param_type_2 = NoneType;
    using param_type_3 = NoneType;
    using param_type_4 = NoneType;
    using param_type_5 = NoneType;
    using param_type_6 = NoneType;
    using param_type_7 = NoneType;
    
    explicit function_obj(type fp) : func_ptr_(fp) {}

    R operator()(P0 p0, P1 p1) {
        return func_ptr_(p0, p1);
    }
    type func_ptr_;
};

template <typename R>
function_obj<R, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType> function(R (*fp)()) {
    return function_obj<R, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fp);
}

template <typename R, typename P0>
function_obj<R, P0,NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType> function(R (*fp)(P0)) {
    return function_obj<R,P0,NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fp);
}

template <typename R, typename P0, typename P1>
function_obj<R, P0, P1, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType> function(R (*fp)(P0, P1)) {
    return function_obj<R, P0, P1, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fp);
}

template <typename R, typename P0, typename P1, typename P2>
function_obj<R, P0, P1, P2, NoneType, NoneType, NoneType, NoneType, NoneType> function(R (*fp)(P0, P1, P2)) {
    return function_obj<R, P0, P1, P2, NoneType, NoneType, NoneType, NoneType, NoneType>(fp);
}

template <typename R, typename P0, typename P1, typename P2, typename P3>
function_obj<R, P0, P1, P2, P3, NoneType, NoneType, NoneType, NoneType> function(R (*fp)(P0, P1, P2, P3)) {
    return function_obj<R, P0, P1, P2, P3, NoneType, NoneType, NoneType, NoneType>(fp);
}

template <typename R, typename P0, typename P1, typename P2, typename P3, typename P4>
function_obj<R, P0, P1, P2, P3, P4, NoneType, NoneType, NoneType> function(R (*fp)(P0, P1, P2, P3, P4)) {
    return function_obj<R, P0, P1, P2, P3, P4, NoneType, NoneType, NoneType>(fp);
}

template <typename R, typename P0, typename P1, typename P2, typename P3, typename P4, typename P5>
function_obj<R, P0, P1, P2, P3, P4, P5, NoneType, NoneType> function(R (*fp)(P0, P1, P2, P3, P4, P5)) {
    return function_obj<R, P0, P1, P2, P3, P4, P5, NoneType, NoneType>(fp);
}

template <typename R, typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
function_obj<R, P0, P1, P2, P3, P4, P5, P6, NoneType> function(R (*fp)(P0, P1, P2, P3, P4, P5, P6)) {
    return function_obj<R, P0, P1, P2, P3, P4, P5, P6, NoneType>(fp);
}

template <typename R, typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
function_obj<R, P0, P1, P2, P3, P4, P5, P6, P7> function(R (*fp)(P0, P1, P2, P3, P4, P5, P6, P7)) {
    return function_obj<R, P0, P1, P2, P3, P4, P5, P6, P7>(fp);
}

typedef struct {} value_obj_tag;
template <typename T>
struct value_obj {
    using tag = value_obj_tag;
    T value_;
    using return_type = T;

    value_obj(T v) :value_(v) {
    }

    T eval() {
        return value_;
    }
};


template <typename T, typename Tag>
struct TypeOf {
    using return_type = typename T::return_type;
};

// P0 could be raw type or another callable_obj
typedef struct {} callable_obj_tag;

template <typename T>
struct TypeOf<T, NoneType_Tag> {
    using return_type = NoneType;
};

template <typename R, typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
struct callable_obj {
    using tag = callable_obj_tag;
    using return_type = R;
    using param_type_0 = typename TypeOf<P0, typename P0::tag>::return_type; //if P0 is raw type, then param_type_0 = P0 or return P0::return_type
    using param_type_1 = typename TypeOf<P1, typename P1::tag>::return_type;
    using param_type_2 = typename TypeOf<P2, typename P2::tag>::return_type;
    using param_type_3 = typename TypeOf<P3, typename P3::tag>::return_type;
    using param_type_4 = typename TypeOf<P4, typename P4::tag>::return_type;
    using param_type_5 = typename TypeOf<P5, typename P5::tag>::return_type;
    using param_type_6 = typename TypeOf<P6, typename P6::tag>::return_type;
    using param_type_7 = typename TypeOf<P7, typename P7::tag>::return_type;

    using function_obj_def = function_obj<R, param_type_0, param_type_1, param_type_2, param_type_3, param_type_4, param_type_5, param_type_6, param_type_7>;

    callable_obj(function_obj_def fobj): func_obj_(fobj) {
    }

    callable_obj(function_obj_def fobj, P0 param0): func_obj_(fobj), parameter_producer_0_(param0) {
    }

    callable_obj(function_obj_def fobj, P0 param0, P1 param1): func_obj_(fobj), parameter_producer_0_(param0), parameter_producer_1_(param1) {
    }
    
    callable_obj(function_obj_def fobj, P0 param0, P1 param1, P2 param2): func_obj_(fobj), parameter_producer_0_(param0), parameter_producer_1_(param1), parameter_producer_2_(param2) {
    }

    callable_obj(function_obj_def fobj, P0 param0, P1 param1, P2 param2, P3 param3)
        : func_obj_(fobj), 
        parameter_producer_0_(param0), 
        parameter_producer_1_(param1), 
        parameter_producer_2_(param2),
        parameter_producer_3_(param3) {
    }

    callable_obj(function_obj_def fobj, P0 param0, P1 param1, P2 param2, P3 param3, P4 param4)
        : func_obj_(fobj), 
        parameter_producer_0_(param0), 
        parameter_producer_1_(param1), 
        parameter_producer_2_(param2),
        parameter_producer_3_(param3),
        parameter_producer_4_(param4) {
    }

    callable_obj(function_obj_def fobj, P0 param0, P1 param1, P2 param2, P3 param3, P4 param4, P5 param5)
        : func_obj_(fobj), 
        parameter_producer_0_(param0), 
        parameter_producer_1_(param1), 
        parameter_producer_2_(param2),
        parameter_producer_3_(param3),
        parameter_producer_4_(param4),
        parameter_producer_5_(param5) {
    }

    callable_obj(function_obj_def fobj, P0 param0, P1 param1, P2 param2, P3 param3, P4 param4, P5 param5, P6 param6)
        : func_obj_(fobj), 
        parameter_producer_0_(param0), 
        parameter_producer_1_(param1), 
        parameter_producer_2_(param2),
        parameter_producer_3_(param3),
        parameter_producer_4_(param4),
        parameter_producer_5_(param5),
        parameter_producer_6_(param6) {
    }

    callable_obj(function_obj_def fobj, P0 param0, P1 param1, P2 param2, P3 param3, P4 param4, P5 param5, P6 param6, P7 param7)
        : func_obj_(fobj), 
        parameter_producer_0_(param0), 
        parameter_producer_1_(param1), 
        parameter_producer_2_(param2),
        parameter_producer_3_(param3),
        parameter_producer_4_(param4),
        parameter_producer_5_(param5),
        parameter_producer_6_(param6),
        parameter_producer_7_(param7) {
    }

    R eval()
    {
        if (!std::is_same<param_type_7, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval(), parameter_producer_1_.eval(), parameter_producer_2_.eval(), parameter_producer_3_.eval(), parameter_producer_4_.eval(), parameter_producer_5_.eval(), parameter_producer_6_.eval(), parameter_producer_7_.eval());
        } else if (!std::is_same<param_type_6, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval(), parameter_producer_1_.eval(), parameter_producer_2_.eval(), parameter_producer_3_.eval(), parameter_producer_4_.eval(), parameter_producer_5_.eval(), parameter_producer_6_.eval());
        } else if (!std::is_same<param_type_5, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval(), parameter_producer_1_.eval(), parameter_producer_2_.eval(), parameter_producer_3_.eval(), parameter_producer_4_.eval(), parameter_producer_5_.eval());
        } else if (!std::is_same<param_type_4, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval(), parameter_producer_1_.eval(), parameter_producer_2_.eval(), parameter_producer_3_.eval(), parameter_producer_4_.eval());
        } else if (!std::is_same<param_type_3, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval(), parameter_producer_1_.eval(), parameter_producer_2_.eval(), parameter_producer_3_.eval());
        } else if (!std::is_same<param_type_2, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval(), parameter_producer_1_.eval(), parameter_producer_2_.eval());
        } else if (!std::is_same<param_type_1, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval(), parameter_producer_1_.eval());
        } else if (!std::is_same<param_type_0, NoneType>::value) {
            return func_obj_(parameter_producer_0_.eval());
        } else {
            return func_obj_();
        }
    }

    P0 parameter_producer_0_;
    P1 parameter_producer_1_;
    P2 parameter_producer_2_;
    P3 parameter_producer_3_;
    P4 parameter_producer_4_;
    P5 parameter_producer_5_;
    P6 parameter_producer_6_;
    P7 parameter_producer_7_;

    function_obj<R, param_type_0, param_type_1, param_type_2, param_type_3, param_type_4, param_type_5, param_type_6, param_type_7> func_obj_;
};

// template <typename F, typename P0 >
// callable_obj<typename F::return_type, value_obj<P0>> callable(F fobj, P0 v) {
//     static_assert(std::is_same<F::param_type_0, P0>::value);
//     return callable_obj<typename F::return_type, value_obj<P0>, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fobj, value_obj<P0>(v));
// }

// template <typename F, typename P0, typename P1>
// callable_obj<typename F::return_type, value_obj<P0>, value_obj<P1>> callable(F fobj, P0 p0, P1 p1) {
//     static_assert(std::is_same<F::param_type_0, P0>::value);
//     static_assert(std::is_same<F::param_type_1, P1>::value);
//     return callable_obj<typename F::return_type, value_obj<P0>, value_obj<P1>, value_obj<P1>, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fobj, p0, p1);
// }

// template <typename F, typename P_>
// callable_obj<typename F::return_type, callable_obj<typename F::param_type_0, P_>> callable(F fobj, callable_obj<typename F::param_type_0, P_> p0) {
//     return callable_obj<typename F::return_type_0, callable_obj<typename F::param_type, P_>>(fobj, p0);
// }

template <typename T>
struct Wrapper{
    using type = value_obj<T>;
};

template <typename F>
callable_obj<typename F::return_type, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType> callable(F fobj){
    return callable_obj<typename F::return_type, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fobj);
}

template <typename F, typename C0>
callable_obj<typename F::return_type, C0, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType> callable(F fobj, C0 c0){
    return callable_obj<typename F::return_type, C0, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fobj, c0);
}

// C0|C1 could be other callable_object or Value_obj, we need extract paramter list from C0,C1
template <typename F, typename C0, typename C1>
callable_obj<typename F::return_type, C0, C1, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType> callable(F fobj, C0 c0, C1 c1){
    return callable_obj<typename F::return_type, C0, C1, NoneType, NoneType, NoneType, NoneType, NoneType, NoneType>(fobj, c0, c1);
}
// struct dispatcher {
//     enum {
        // deployment_policy_randome, 
// }
//     dispatcher(unsigned int thread_count = 0 /*local thread*/) {
//     }

//     struct thread_wrapper {
//         thread_wrapper() {
//             worker_ = std::thread();
//         }
//         void run () {

//         }

//         std::thread worker_;
//     };

//     template <typename C>
//     typename C::return_type deploy(C jobs) {

//     }

//     std::thread
// };

// template <typename C>
// typename C::return_type dispatch(C callable_instance, dispatcher& multi_thread_dispatcher) {
//     return multi_thread_dispatcher.deploy(C);
// }

int increase(int src) {
    return src + 1;
}

int* increase_v2(int* src) {
    (*src)++;

    return src;
}

int add(int a, int b) {
    return a + b;
}

int main() {

    {
        int value = 0;
        function(&increase)(1) == 2;
        auto return_value_0 = callable(function(increase), value);          // run in thread A, value can be replaced by placeholder
        // auto return_value_1 = callable(function(increase), return_value_0); // run in thread B once thread A done
        // auto return_value_2 = callable(function(increase), return_value_1); // run in thread c once thread B done

        // assert(return_value == 3);
        // std::cout << "origin value = " << value << "return_value_2.eval() == " << return_value_2.eval() << std::endl;
        // assert( 3 == return_value_2.eval() );
    }

    // {
    //     int value = 0;
    //     auto r0 = callable(function(increase_v2), &value);
    //     auto r1 = callable(function(increase_v2), r0);
    //     auto r2 = callable(function(increase_v2), r1);

    //     assert( 3 == *r2.eval());
    //     assert(3 == value);
    // }

    // {
    //     int a = 1;
    //     int b = 1;

    //     auto c = callable(function(add), a , b);
    //     auto d = callable(function(add), b, c);

    //     assert();
    // }

    return 0;
}