// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top___024root__trace_chg_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);
void Vtb_top___024root__trace_chg_dtype____1(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_top__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelfRef.tb_top__DOT__instruction_memory[14]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_top__DOT__instruction_memory[13]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_top__DOT__instruction_memory[12]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_top__DOT__instruction_memory[11]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_top__DOT__instruction_memory[10]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_top__DOT__instruction_memory[9]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_top__DOT__instruction_memory[8]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_top__DOT__instruction_memory[7]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_top__DOT__instruction_memory[6]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_top__DOT__instruction_memory[5]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_top__DOT__instruction_memory[4]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_top__DOT__instruction_memory[3]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_top__DOT__instruction_memory[2]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_top__DOT__instruction_memory[1]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_top__DOT__instruction_memory[0]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgIData(oldp+17,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[0]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[1]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[2]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[3]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[4]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[5]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[6]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[7]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[8]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[9]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[10]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[11]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[12]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[13]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[14]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[14]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[13]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[12]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[11]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[10]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[9]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[8]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[7]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[6]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[5]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[4]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[3]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[2]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[1]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[0]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[7U])))) {
        bufp->chgCData(oldp+47,(vlSelfRef.tb_top__DOT__id_exCtrl),5);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_top__DOT__id_memCtrl),4);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_top__DOT__id_wbCtrl),4);
        bufp->chgBit(oldp+50,(vlSelfRef.tb_top__DOT__id_PCJmp));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+53,(((IData)(4U) + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc)),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_top__DOT__if_id_pcIncr),32);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_top__DOT__id_ex_regS),5);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_top__DOT__id_ex_shamt_out),5);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_top__DOT__id_ex_pcIncr),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_top__DOT__id_ex_sgnExt),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_top__DOT__id_ex_rdDataOne),32);
        bufp->chgIData(oldp+60,((vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                 + (vlSelfRef.tb_top__DOT__id_ex_sgnExt 
                                    << 2U))),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_top__DOT__mem_wb_memReadData),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_top__DOT__mem_wb_aluResult),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+64,(vlSelfRef.tb_top__DOT__if_id_inst),32);
        bufp->chgCData(oldp+65,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x00000010U))),5);
        bufp->chgCData(oldp+66,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x00000015U))),5);
        bufp->chgCData(oldp+67,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 6U))),5);
        bufp->chgBit(oldp+68,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite));
        bufp->chgCData(oldp+69,(vlSelfRef.tb_top__DOT__id_ex_regT),5);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_top__DOT__id_ex_regD),5);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_top__DOT__id_ex_exCtrl),5);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_top__DOT__id_ex_memCtrl),4);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_top__DOT__id_ex_wbCtrl),4);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_top__DOT__id_ex_rdDataTwo),32);
        bufp->chgCData(oldp+75,(((8U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                  ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                  : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT))),5);
        bufp->chgBit(oldp+76,((0U == vlSelfRef.tb_top__DOT__ex_aluResult)));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_top__DOT__ex_overflowFlag));
        bufp->chgIData(oldp+78,(vlSelfRef.tb_top__DOT__ex_aluResult),32);
        bufp->chgBit(oldp+79,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc));
        bufp->chgCData(oldp+80,(vlSelfRef.tb_top__DOT__ex_mem_regDst),5);
        bufp->chgCData(oldp+81,(vlSelfRef.tb_top__DOT__ex_mem_memCtrl),4);
        bufp->chgCData(oldp+82,(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl),4);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_top__DOT__ex_mem_aluResult),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo),32);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl),4);
        bufp->chgCData(oldp+86,(vlSelfRef.tb_top__DOT__mem_wb_regDst),5);
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                     >> 1U))));
        bufp->chgIData(oldp+88,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data),32);
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
                                     >> 1U))));
        bufp->chgCData(oldp+90,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA),2);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB),2);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a),32);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b),32);
        bufp->chgQData(oldp+95,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended),33);
        bufp->chgBit(oldp+97,((1U & (IData)(vlSelfRef.tb_top__DOT__id_ex_memCtrl))));
        bufp->chgBit(oldp+98,((IData)((8U == (0xfc00003fU 
                                              & vlSelfRef.tb_top__DOT__if_id_inst)))));
        bufp->chgBit(oldp+99,(((2U == (vlSelfRef.tb_top__DOT__if_id_inst 
                                       >> 0x0000001aU)) 
                               | (3U == (vlSelfRef.tb_top__DOT__if_id_inst 
                                         >> 0x0000001aU)))));
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+101,((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))));
        bufp->chgIData(oldp+102,(vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData),32);
    }
    bufp->chgBit(oldp+103,(vlSelfRef.tb_top__DOT__clk));
    bufp->chgIData(oldp+104,(vlSelfRef.tb_top__DOT__i),32);
    bufp->chgIData(oldp+105,((vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory
                              [(0x0000000fU & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                               >> 2U))] 
                              & (- (IData)(((~ (IData)(vlSelfRef.tb_top__DOT__rst)) 
                                            & (0x0eU 
                                               >= (0x0000000fU 
                                                   & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                                      >> 2U)))))))),32);
    bufp->chgCData(oldp+106,((0x0000001fU & ((vlSelfRef.tb_top__DOT__if_id_inst 
                                              >> 0x0000000bU) 
                                             | (- (IData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)))))),5);
    bufp->chgIData(oldp+107,(((((- (IData)((1U & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                  >> 0x0000000fU)))) 
                                & (- (IData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel)))) 
                               << 0x00000010U) | (0x0000ffffU 
                                                  & vlSelfRef.tb_top__DOT__if_id_inst))),32);
    bufp->chgIData(oldp+108,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one),32);
    bufp->chgIData(oldp+109,(((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)
                               ? 4U : vlSelfRef.tb_top__DOT__reg_file_debug
                              [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                               >> 0x00000010U))])),32);
    Vtb_top___024root__trace_chg_dtype____0(vlSelf, bufp, 110, vlSelfRef.tb_top__DOT__reg_file_debug);
    bufp->chgIData(oldp+142,(((IData)((8U == (0xfc00003fU 
                                              & vlSelfRef.tb_top__DOT__if_id_inst)))
                               ? vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one
                               : (((0xf0000000U & vlSelfRef.tb_top__DOT__if_id_pcIncr) 
                                   | (0x0ffffffcU & 
                                      (vlSelfRef.tb_top__DOT__if_id_inst 
                                       << 2U))) & (- (IData)(
                                                             ((2U 
                                                               == 
                                                               (vlSelfRef.tb_top__DOT__if_id_inst 
                                                                >> 0x0000001aU)) 
                                                              | (3U 
                                                                 == 
                                                                 (vlSelfRef.tb_top__DOT__if_id_inst 
                                                                  >> 0x0000001aU)))))))),32);
    bufp->chgIData(oldp+143,((vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                              [(0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                               >> 2U))] 
                              & (- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl)))))),32);
    bufp->chgIData(oldp+144,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__i),32);
    Vtb_top___024root__trace_chg_dtype____1(vlSelf, bufp, 145, vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory);
}

void Vtb_top___024root__trace_chg_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_dtype____0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void Vtb_top___024root__trace_chg_dtype____1(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_dtype____1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_cleanup\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
