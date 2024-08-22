#pragma once

#include <google/protobuf/service.h>
#include <string>

class MprpcController : public google::protobuf::RpcController
{
public:
    MprpcController();
    void Reset() override;
    bool Failed() const override;
    std::string ErrorText() const override;
    void SetFailed(const std::string &reason) override;

    //目前未实现具体的功能
    void StartCancel() override;
    bool IsCanceled() const override;
    void NotifyOnCancel(google::protobuf::Closure *callback) override;

private:
    bool m_failed;         // Rpc方法执行过程中的状态
    std::string m_errText; // Rpc方法执行过程中的错误信息
};